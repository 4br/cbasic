#include <stdio.h>
int main(){
  int fact=1, n, i;
  printf("Enter n:\n");
  scanf("%d",&n);
  if (n<0) {
    printf("Error");
  }
  else if (n==0){
    printf("Factorial=0");
  }
  else {
    for (i = 1; i < n; i++) {
      fact=fact*i;
    }
    printf("Factorial of %d = %d\n",n,fact);
  }
  return 0;
}
