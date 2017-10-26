#include<stdlib.h>
#include<stdio.h>

//This works, but the file needs to be formatted correctly
//each line needs quotes and \n for new lines
//you can use this command, but there may be problems if there are already quotes in your text
//sed ':a;N;$!ba;s/\n/\\n\n/g' file.txt|sed 's/^/"/g'|sed 's/$/"/g' > file2.txt

int main(){
  const char* text =
  #include "file2.txt"
  ;
  printf("%s\n", text);
  return 0;
}
