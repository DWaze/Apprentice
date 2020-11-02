cmake_minimum_required(VERSION 3.17)
project(Apprentice)

set(CMAKE_CXX_STANDARD 14)

add_executable(apprentice main.cpp IRace.hh ARace.cpp ARace.hh AHuman.cpp AHuman.hh Nordic.cpp Nordic.hh Vampire.cpp Vampire.hh Elf.cpp Elf.hh)