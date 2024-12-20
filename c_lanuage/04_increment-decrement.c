#include<stdio.h>

int main(){

  int i = 5; 
  printf("The value of after i++ is %d\n", i++);
  // note i++ is for first print then increment
  // note ++i is for first increment then print
  printf("The value of 1 is %d\n", i);
   i+=10;
  printf("The value of after i+=10 is %d\n", i);
  int j = 5; 
  printf("The value of after ++j is %d\n", ++j);
  j+=5;
  printf("The value of 1 is %d\n", j);
  return 0;
}