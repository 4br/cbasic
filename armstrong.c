#include<stdio.h>
int main()
{
  int d, arm=0, num, original, i;
  printf("Enter number:\n");
  scanf("%d", &num);
  original=num;
  while (num!=0) {
    d=(num%10);
    arm+=(d*d*d);
    num=num/10;
  }
  if (arm==original) {
    printf("%d is an armstrong number\n", original );
  }
  else {
    printf("%d is not an armstrong number\n", original );
  }
  return 0;
}
