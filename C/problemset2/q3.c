// This is to calculate the factorial of a given number.

#include <stdio.h>

int main(void) {
  int num, fac=1;
  printf("Please enter an interger: ");
  scanf("%d", &num);

  for( int i=num; i>0; i-- )
  {
    
    fac *= i;
  }
    printf("The factorial of %d is %d",num, fac);

  return 0;
}
