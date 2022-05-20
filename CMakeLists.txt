project(reFCS)

add_library(
    FCS.cpp
    FCS.h
    ./Error/O.hpp
    ./Error/_Error/Error.cpp
    ./Error/_Error/Error.hpp
    ./System/System_String.cpp
    ./System/System_String.hpp
    )
