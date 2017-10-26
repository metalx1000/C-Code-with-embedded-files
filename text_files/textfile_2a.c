#include<stdio.h>
#include "text.h"
//text.h is generated with this command
//xxd -i file.txt > text.h
//then removed the last hex charactor to avoid @
//, 0x0a

int main(){
  printf("%s\n",file_txt);
  return 0;
}

