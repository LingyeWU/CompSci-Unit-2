// This program checks whether a given number is positive or negative
#include <stdio.h>

int main() {
  int num;
  printf("Please enter the integer: ");
  scanf("%d", &num);

  if ( num > 0 )
    printf( "%d is a positive number", num);
    else if ( num == 0 )
      printf( "%d is 0", num);
  else
    printf("%d is a negative number", num);
  return 0;
}
