//
#include <stdio.h>

int main() {
  int age;
  printf("Please enter your age in integer: ");
  scanf("%d", &age);

  if ( age >= 21 )
    printf( "Congratulations! You are eligible for casting your vote");
    else if ( age < 21 )
      printf( "Sorry! You are not eligible for voting yet");
  else
    printf("error");
  return 0;
}
