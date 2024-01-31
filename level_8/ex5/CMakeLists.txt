cmake_minimum_required(VERSION 3.0.0)
project(TestNormalDistribution VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 17) # For C++17

include(CTest)
enable_testing()

# Specify the minimum version of Boost, and any components you need
find_package(Boost 1.83.0)

# If Boost was found successfully, include directories and link libraries
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
    add_executable(TestNormalDistribution TestNormalDistribution.cpp)
    target_link_libraries(TestNormalDistribution ${Boost_LIBRARIES})
endif()


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)