#include<stdio.h>
int main()
{
  float d, u, a, t;
  int  op;/*Sets the char.*/
  /*d- distance
    u- initial velocity
    a- acceleration
    t- time period*/
  do {  
    printf("Enter the value for the initial velocity:\n");
    scanf("%f", &u);
    printf("Enter the value for the acceleration:\n");
    scanf("%f", &a);
    printf("Enter the value for the time period:\n");
    scanf("%f", &t);
    d=(u*t)+((a*(t*t))/2);
    printf("Distance travelled=%f\n", d);
    printf("Do you wish to continue?\n1.Yes\n2.No\n (1 or 2)?\n");
    scanf("%d", &op);
    printf("You have chosen %d\n",op);
  }  while (op==1);
  return 0;
}
