// This program is to find the perfect numbers within a given number of range. I have researched on the internet to finish this program. http://c.net-question.in/c-basic-programs/perfect-numbers-between-given-range

#include <stdio.h>
//Define the variables.
int main(void) {
  int begin, end,i,p=1,sum=0;
  //Getting the begining number and the ending number
  printf("Input the starting range or number: \n");
  scanf("%d", &begin);
  printf("Input the ending range of number: \n");
  scanf("%d", &end);

    for(i= begin; i<= end; i++)
      {
       while(p<i)
       {
         if(i%p==0)
          sum=sum+p;
          p++;
       }
       }
    if(sum==i){
    printf("Perfect numbers between the given range are: %d", i);}
     return 0; 
      }

 
