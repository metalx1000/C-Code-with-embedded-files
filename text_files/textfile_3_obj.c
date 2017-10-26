#include <stdio.h>
//create object file -- architecture may very
//objcopy --input binary --output elf64-x86-64 --binary-architecture i386 file.txt file.o
//compile: gcc textfile_3_obj.c file.o -o textfile_3_obj
//for windows/mingw remove underscores

extern char _binary_file_txt_start;
extern char _binary_file_txt_end;

int main(){
    char*  p = &_binary_file_txt_start;

    while ( p != &_binary_file_txt_end ) putchar(*p++);
    return 0;
}

