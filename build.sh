#!/bin/sh

g++ $1.cpp -o $1 -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++23
