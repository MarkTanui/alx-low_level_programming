#!/bin/bash
gcc *.c -L. -c -fPIC
gcc *.o -shared -o liball.so
