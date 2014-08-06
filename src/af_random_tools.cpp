#include "af_random_tools.h"

#include <iostream>

#include <string.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
#include <unistd.h>     /* getpid, getppid */

//! Initializes the random number generator with a given seed.
void AF_RandomTools::Randomize_Seed(unsigned seed)
{
    srand(seed);
}

//! Returns a random real number in [0..1) (1 not included)
double AF_RandomTools::Random_Double(void)
{
    return ((double) rand() / (RAND_MAX + 1.0));
}

//! Initializes the random number generator with a random seed.
unsigned AF_RandomTools::Randomize(void)
{
    int count = 0;
    unsigned seed;
    int seed_found = 0;
    /* #if defined(__unix__)
    {
        int fd;
        if ((fd = open("/dev/urandom", O_RDONLY|O_NONBLOCK)) != -1 ||
            (fd = open("/dev/random",  O_RDONLY|O_NONBLOCK)) != -1)
        {
            struct stat st;
            // Make sure it's a character device
            if ((fstat(fd, &st) == 0) && S_ISCHR(st.st_mode) && read(fd, &seed, sizeof(seed)) == sizeof(seed))
                seed_found = 1;
            close(fd);
        }
    }
    #endif */
    if (!seed_found)
    {
        /* #if defined(__unix__) || defined(__CYGWIN__)
        struct timeval tv;
        unsigned seed;
        gettimeofday(&tv, NULL);
        seed = (tv.tv_sec * 1000) + (tv.tv_usec / 1000);
        #else */
        seed = time(NULL);
        //#endif
        count = (count + rand()) % 0xFFFFFFF;
        seed = seed + (getpid() << (seed & 0xFF)) + getppid();
        seed *= count;
    }

    seed = seed & 0x7FFFFFFF;

    Randomize_Seed(seed);

    return seed;
}

//! Returns a random number in [0..n-1].
unsigned AF_RandomTools::Random(unsigned n)
{
    return (unsigned) (Random_Double() * n);
}
