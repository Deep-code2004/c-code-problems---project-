#include<stdio.h>

int main(){

  int i;
  printf("Enter the value of i \n");
scanf("%d", &i);
int n ; 
printf("Enter the value of n \n");
scanf("%d", &n);
  do{
    printf("This value of i is %d\n", i);
    
    i++;
  }while(i < n ); 
  
  return 0;
}