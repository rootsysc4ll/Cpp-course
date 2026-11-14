#!/bin/sh

if   [[ $1 == "gcc" ]]; then
    g++ $2.cpp -o $2.bin -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++23
elif [[ $1 == "clang" ]]; then
    clang++ $2.cpp -o $2.bin -Wall -Weffc++ -Wextra -Wconversion -Wsign-conversion -Werror -std=c++23
else
    echo "[BUILD]: Enter a compiler to use."
fi
