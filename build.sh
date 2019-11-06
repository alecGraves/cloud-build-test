#!/bin/sh
mkdir build && \
cd build && \
cmake .. -DCMAKE_BUILD_TYPE=Release && \
make -j2 && \
./test/test_hello
