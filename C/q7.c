// This program checks the weather and sends a suitable message
#include <stdio.h>

int main() {
   float temp;
  printf("Please enter the temperature in centigrade: ");
  printf("\n");
  //Store three numbers into different variables
  scanf( "%f", &temp );

if (temp<0)
printf("Freezing weather");
else if (temp>=0 && temp <10)
printf("Very Cold weather");
else if (temp>=10 && temp <20)
printf("Cold weather");
else if (temp>=20 && temp<30)
printf("Normal in temp");
else if (temp>=30 && temp < 40)
printf("It's hot");
else
printf("It's very hot");

  return 0;
}
