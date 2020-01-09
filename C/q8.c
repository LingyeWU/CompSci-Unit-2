// This program checks the weather and sends a suitable message
#include <stdio.h>

int main() {
   float a, b, c;
  printf("Please enter the three sides of the triangle ");
  printf("\n");
  //Store three numbers into different variables
  scanf( "%f %f %f", &a, &b, &c );

  if ( a==b && b==c)
  printf("This is an equilateral triangle");
  else if ( (a==b && b!=c) || (a==c && b!=c)|| (b==c && b!=a) )
  printf("This is an isosceles triangle");
  else if ( a!=b && b!=c )
  printf("This is a scalene triangle");



  return 0;
}
