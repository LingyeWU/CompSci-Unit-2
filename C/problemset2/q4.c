// to display the n terms of harmonic series and their sum.  1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

#include <stdio.h>

int main(void) {
  int num;
  float i, sum=0;
  printf("Please enter an interger: ");
  scanf("%d", &num);

 for(i=1; i<=num; i++)
 {
  sum +=1/i;
 }
 printf("Sum of series up to %d terms is %f", num, sum);
  return 0;
}
