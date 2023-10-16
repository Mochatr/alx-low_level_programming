#!/bin/bash
gcc -fPIC -c *.c
gcc -shared *.o -c liball.so
