#include<stdio.h>

int main(){

int num; 
printf("Enter Your Number\n");
scanf("%d", &num);

if(num==1){
  printf("This is a 1\n");
}
else if(num==2)
{
  printf("This is a 2\n");
}
else if(num==3)
{
  printf("This is a 3\n");
}
else{
  printf("oops! This is not a 1,2 and 3\n");
}
  return 0;
}