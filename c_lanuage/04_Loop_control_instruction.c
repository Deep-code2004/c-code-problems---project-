#include<stdio.h>

int main(){

  // Loop are used to repeat a similar part of a code snippet efficiently
  int a ;
  printf("Enter a number\n");
  scanf("%d", &a);
  // IF value is true then loop will be executed;
  while(a<10){
    printf("%d\n", a);
    a++;
  }
  return 0;
}