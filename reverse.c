#include<stdio.h>
int main()
{
  int rev=0, num, original, i;
  printf("Enter number:\n");
  scanf("%d", &num);
  original=num;
  while (num!=0) {
    rev=rev*10+(num%10);
    num=num/10;
  }
  printf("Reverse of %d = %d\n",original, rev);
  if(original==rev)
    {
      printf("%d is palindrome\n", original);
    }
  else
    {
      printf("%d is not a palindrome\n", original);
    }
  return 0;
}
