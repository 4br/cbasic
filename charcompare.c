#include <stdio.h>
#include <string.h>

int main(){
  int i=0;
  char name1[10];
  char name2[10];
  printf("Enter the two names:\n");
  gets(name1);
  gets(name2);
  while(name1[i]==name2[i] && name1[i]!='\0' && name2[i]!='\0')
    {
      i++;
      
    }
  if(name1[i]!='\0' && name2[i]!='\0')
    printf("The names are equal\n");
  else
    printf("The names are not equal\n");
  return 0;
}
