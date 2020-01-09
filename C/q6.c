// This program checks if one is eligible of admission for a professional course
#include <stdio.h>

int main() {
   int a, b, c, d=a+b+c, e=a+b;
  printf("Please enter your score for Maths, Physics, and Chem in order: ");
  printf("\n");
  //Store three numbers into different variables
  scanf( "%d %d %d", &a, &b, &c );

  if ( ((a>=65 && b>=55 && c>=50 && d>=180)) || e>=140)
  printf("The candidate is eligible for admission");
    else
    printf("The candidate is not eligible for admission");
  return 0;
}
