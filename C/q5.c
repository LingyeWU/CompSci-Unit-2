// This program determines in whihc quadrant the coordinate poit lies
#include <stdio.h>

int main() {
   float x,y;
  printf("Please enter the coordinate in numbers without punctuation: ");
  //Store three numbers into different variables
  scanf( "%f %f", &x, &y );

  if (x>0 && y>0)
    printf("The coordinate point (%f, %f) lies in the first quadrant", x, y);

    else if (x>0 && y<0)
    printf("The coordinate point (%f, %f) lies in the sencond quadrant", x, y);

    else if (x<0 && y>0)
    printf("The coordinate point (%f, %f) lies in the fourth quadrant", x, y);

    else if (x<0 && y<0)
    printf("The coordinate point (%f, %f) lies in the third quadrant", x, y);


 else
 printf("The coordinate point (%f, %f) lies on the coordinate axis");
  return 0;
}
