// This program is to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.

#include <stdio.h>

int main(void) {
  int num, i, term=1, sum=0;

  printf("Please enter the terms: ");
  scanf("%d", &num);

 for(i=1;i<=num;i++)
 {
  printf("%d", term);
  if(i<num)
  {
    printf("+"); 
  }
   sum=sum+term;
   term=(term*10)+1;
}
   printf("\n");
   printf("The sum is %d ", sum);
  return 0;
}
