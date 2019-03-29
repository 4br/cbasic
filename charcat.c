#include <stdio.h>
#include <string.h>

int main(){
  int i=0,l;
  char name1[10];
  char name2[10];
  printf("Enter the two names:\n");
  gets(name1);
  gets(name2);
  strcat(name1,name2);
  printf("The apended string %s\n", name1);
  return 0;
}
