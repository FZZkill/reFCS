project(reFCS)

set(CMAKE_CXX_STANDARD 17)
message("C++ Standard: ${CMAKE-CXX_STANDRAD}")
file(GLOB SRC_FILES "./FCS.cpp", "./Error/O.hpp", "./System/*.cpp")
add_executable(${CMAKE_PROJECT_NAME} ${SRC_FILES})
