#include<stdio.h>

int main(){

int age;
int vip = 0;
 vip = 1;


printf("Enter your age\n");
scanf("%d", &age);

if ((age <= 70 && age >= 18 ) || (vip==1))
{
  printf("You can not drive\n");
}
else{
  printf("you can drive\n");
}

  return 0;
}