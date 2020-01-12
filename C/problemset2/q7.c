// This program is to display the Pascal's triangle with givern rows. I asked tuan for help on this.

#include <stdio.h>

int main(void) {
  //1.Define the variables
  int rows, coef=1, space, i, j;
  //2.Ask the user for input
  scanf("%d", &rows);

    for (i=0; i<rows; i++) {  
        for (space=1; space <= rows-i; space++) /*Print space between 2 coefs*/
            printf("  ");
        for (j=0; j<=i; j++) {  
            if (j==0 || i==j)
                coef = 1;   /*The first and the last coef of each row are 1*/
            else
                coef=coef*(i-j+1)/j;   /*Calculate the coefficient*/
            printf("%4d", coef);   /*print out the coefficient*/
        }
        printf("\n");   /*Enter a new line*/
    }
         
    return 0;
}

 
