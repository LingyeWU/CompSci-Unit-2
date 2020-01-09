// This program checks whether a given number is even or odd
#include <stdio.h>

int main() {
  int num;
  printf("Please enter the integer: ");
  scanf("%d", &num);

  if ( num % 2 == 0 )
    printf( "%d is an even integer", num);
  else
    printf("%d is an odd integer", num);
  return 0;
}
