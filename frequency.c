#include <stdio.h>
#include <math.h>
int main()
{
  float r, c, l, f;
  printf("Enter the value for the Inductance:\n");
  scanf("%f", &l);
  printf("Enter the value for the resistance:\n");
  scanf("%f", &r);
  printf("C\t F");
  while (c <= 0.1) {
    c = 0.01; 
    f=sqrt((1/(l*c))-((r*r)/(4*c*c)));
    printf("%f\t %f",c,f );
    c+=0.01;
  }
  return 0;
}
