# 0x18. C - Dynamic libraries

# Description

This project in the Low Level Programming series is about:

* What is a dynamic library, how does it work, how to create one, and how to use it
* What is the environment variable $LD_LIBRARY_PATH and how to use it
* What are the differences between static and shared libraries
* Basic usage nm, ldd, ldconfig

## Files

---
File | Description
---|---
main.h | header file with all function prototypes in this directory
libdynamic.so | dynamic library with all my functions
1-create_dynamic_lib.sh | script to create dynamic library
---

## How to compile C files for dynamic library

> gcc -g -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o <libary.so> nm -D --defined-only <library.so>

# Author
Patrick Annang
