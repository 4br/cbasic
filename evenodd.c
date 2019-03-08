#include <stdio.h>
int main(){
  
  int i, n, o=0,e=0;
  printf("Enter the number of digits you wish to sort\n");
  scanf("%d", &n);
    int even[n], odd[n];
  for (i = 0; i < n; ++i) {
    if (i%2==0) {
      even[e]=i;
      e++;
    }
    else{
      odd[o]=i;
	o++;
    }
  }
  int half= n/2; 
  printf("The sorted list:\n The even numbers are:\n");
  for (i = 0; i < half; ++i) {
    printf("%d\n",even[i]);
  }
  printf("The odd numbers are: \n");
    for (i = 0; i < half; ++i) {
    printf("%d\n",odd[i]);
  }
}
