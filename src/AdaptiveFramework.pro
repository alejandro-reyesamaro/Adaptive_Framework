TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    solver.cpp \
    benchmark.cpp \
    ad_data.cpp \
    ad_data_parallel.cpp \
    ad_data_sequential.cpp \
    default_cost_swap.cpp \
    default_cost_variable.cpp \
    default_display_solution.cpp \
    default_execute_swap.cpp \
    default_next_i.cpp \
    default_next_j.cpp \
    default_reset.cpp

HEADERS += \
    solver.h \
    benchmark.h \
    ad_data.h \
    ad_data_parallel.h \
    ad_data_sequential.h \
    strategy_cost.h \
    strategy_cost_swap.h \
    strategy_display_solution.h \
    strategy_execute_swap.h \
    strategy_next_i.h \
    strategy_next_j.h \
    strategy_reset.h \
    default_cost_swap.h \
    default_cost_variable.h \
    default_display_solution.h \
    default_execute_swap.h \
    default_next_i.h \
    default_next_j.h \
    default_reset.h

QMAKE_CXXFLAGS += -std=c++11

