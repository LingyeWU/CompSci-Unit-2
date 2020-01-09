// This program calculates and prints the electricity bill of a given customer
#include <stdio.h>

int main() {
  int a, cost=0,unitcost=0, surcharge=0, total=0;
  char b;
  float c;
 printf("Please enter your ID number: ");
 printf("\n");
 scanf( "%d", &a);
   printf("Please enter your name: ");
   printf("\n");
   scanf("%c", &b);
      printf("Please enter the unit consumed: ");
      printf("\n");
      scanf("%f", &c);

if (c<0)
{
   printf("Invalid input.\n");
 }
 else if (c>=0 && c<200)
 {
   cost=12/10*c;
   unitcost=12/10;
 }
 else if (c>=200 && c<400)
   {
     cost=15/10*c;
     unitcost=15/10;
   }
 else if (c>400 && c<=600)
 {
   cost=18/10*c;
   unitcost=18/10;
 }
 else if (c>=600)
 {
   cost=2*c;
   unitcost=2;
 }
 if (cost>400)
 {
   surcharge=15/100*cost;
   total=cost+surcharge;
 }
 printf("Customer ID: %d\n", a);
 printf("Customer Name: %c\n", b);
 printf("Energy Consumed: %f units\n", c);
 printf("Rate Charged: %d yen per unit, total of %d yen\n",unitcost, cost);
 printf("Surcharge: %d yen\n", surcharge);
 printf("Total Amount Due: %d yen\n", cost);
 return 0;
}
