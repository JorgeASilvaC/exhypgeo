cmake_minimum_required (VERSION 2.9)

project (HYPER_TEST)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

include_directories("include")
include_directories("src")
include_directories("executables")

add_executable(hyper
executables/main.cpp
src/hypgeo.cpp
src/hypser.cpp
src/hypdrv.cpp
src/odeint.cpp
src/bsstep.cpp
src/mmid.cpp
src/pzextr.cpp
src/rkqs.cpp
src/rkck.cpp
)

add_executable(hyper2
executables/main2.cpp
src/hypgeo.cpp
src/hypser.cpp
src/hypdrv.cpp
src/odeint.cpp
src/bsstep.cpp
src/mmid.cpp
src/pzextr.cpp
src/rkqs.cpp
src/rkck.cpp
)
