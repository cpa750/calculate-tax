cmake_minimum_required(VERSION 3.14.7) # Second most recent Cmake version for compatibility
set (Boost_USE_STATIC_LIBS OFF)
find_package (Boost REQUIRED COMPONENTS unit_test_framework)
include_directories (${Boost_INCLUDE_DIRS})

include_directories(../include ../src)
add_executable (Tests
                MainTestModule.cpp
                TestTaxCalculator.cpp
                ../src/taxcalculate.cpp
                ../include/taxcalculate.h)

target_link_libraries (Tests ${Boost_LIBRARIES})
