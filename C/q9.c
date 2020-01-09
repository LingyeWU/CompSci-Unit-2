// This program checks whether a triangle can be formed by the given angles
#include <stdio.h>

int main() {
   float a, b, c,d=a+b+c;
  printf("Please enter the three angles of the triangle ");
  printf("\n");
  //Store three numbers into different variables
  scanf( "%f %f %f", &a, &b, &c );

if (d==180){
  if((a<=90 && b<=90 && c>0) || (a<=90 && c<=90 && b>0) || (b<=90 && c<=90 && a>0))
printf("The triangle is valid");
  else
  printf("The triangle is invalid");
}
else
printf("The triangle is invalid");
  return 0;
}
