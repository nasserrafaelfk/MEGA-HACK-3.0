#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char string[50] = "Arvore Educação, uma arvore conectada";
  for(int i=0;string[i]!='\0';i++){
    printf("%c",string[i]);
  }
}