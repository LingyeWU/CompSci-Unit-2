// this program reads 10 numbers from keyboard and find their sum and average.

#include <stdio.h>

int main(void) {
  float num, sum=0, average=0;
  

  for (int i=0; i<10; i++)
  {
  printf("Please enter a number \n");
  scanf("%f",&num);
  sum += num;
  average = sum/10;
  }

  printf("The sum of the 10 numbers is %f\n",sum);
  printf("The average is f%", average);
  return 0;
}
