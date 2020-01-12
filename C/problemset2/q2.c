// This is to display the cube of the number upto given an integer.


#include <stdio.h>

int main(void) {
  int num, cube=0;
  printf("Please enter an interger: ");
  scanf("%d", &num);

  for(int i=1; i<=num;i++)
  {
    cube = i*i*i;
    printf("Number is: %d and cube of %d is %d\n", i, i, cube);
  }
  return 0;
}
