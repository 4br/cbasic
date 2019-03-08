#include<stdio.h>

int main()
{
  int a, b;
  char op;
  printf("Select operation to perform [for addition-1, division -4 etc]:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
  scanf("%c", &op);
  printf("The following option has been selected: %c \nEnter the numbers to which the operations needs to be performed\n", op);
  scanf("%d \n %d", &a, &b);
  switch(op)
    {
    case '1':printf("The sum is %d\n", a+b);
      break;
    case '2':printf("The difference is %d\n", a-b);
      break;
    case '3':printf("The sum is %d\n", a*b);
      break;
    case '4':printf("The sum is %d\n", a-b);
      break;
    default:
      printf("Wrong option so taking addition. The sum is %d \n", a+b);
      op=1;
      break;
    }
  return 0;
}

