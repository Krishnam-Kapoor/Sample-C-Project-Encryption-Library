# Sample C Project: Encryption Library
This is an example project to demonstrate the creation of a static C library and subsequently using it in Makefile to build C projects. The `src` directory contains source code for
a sample encryption library. These are compiled into `libcodex.a` archive and stored in `lib` directory. 

### Generating libcodex 
Run the commands below in a terminal to generate `libcodex.a` from the sourcefiles. Note that we have already generated the `libcodex.a` library under the `lib` directory so this step can be skipped.

```sh
$ cd src/
$ gcc -std=c11 -fmax-errors=10 -c -o codex.o codex.c
$ ar rcs libcodex.a codex.o
$ cp ./libcodex.a ../lib/
$ rm -f codex.o libcodex.a
```
Once you have compiled `codex.c` into a static library, it is ready to be used in our sample program to encode or decode text files.

### Running the sample program
```sh
$ make
$ ./program inputfilename encryptedfile encrypt  # To Encryt a file
$ ./program inputfilename decryptedfile decrypt  # To Decrypt a file

```
The `program` executable takes 3 input arguments:

Argument Number | Usage
------------ | -------------
arg1 | Input file name
arg2 | Output file name
arg3 | Action [encrypt/ decrypt]

### Clean up
To clean up the executables and object files run:

```sh
$ make clean
```
