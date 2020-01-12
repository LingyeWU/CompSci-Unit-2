// This program is to display the number in reversed order.

#include <stdio.h>

int main(void) {
 int num, r=0;
 scanf("%d", &num);

 while(num!=0)
 {
   //
   r=r*10;
   r=r+num%10;
   num=num/10;
 }
  printf("%d",r);
  return 0;
}
