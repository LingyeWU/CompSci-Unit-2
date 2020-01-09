// This program finds the largest of the three input numbers
#include <stdio.h>

int main() {
  int a, b, c;
  printf("Please enter three different numbers: ");
  //Store three numbers into different variables
  scanf( "%d %d %d", &a, &b, &c);

  if ( a>b && a>c )
    printf("The 1st number is the greatest among three");
    else if ( b>a && b>c )
      printf( "The 2nd number is the greatest among three");
      else if ( c>a && c>b)
      printf ("The 3rd number is the greatest among three");
  else
    printf("Please enter different numbers");
  return 0;
}
