#!/bin/bash 

mkdir cmake-build-debug && cd cmake-build-debug && cmake ..
cmake --build cmake-build-debug
cmake-build-debug/fluid/fluid 1 small.fld out/test.fld
