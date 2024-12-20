#include<stdio.h>

int main(){

int physics, chemistry, maths;
printf("Enter marks of physics\n");
scanf("%d", &physics);
printf("Enter marks of chemistry\n");
scanf("%d", &chemistry);  
printf("Enter marks of maths\n");
scanf("%d", &maths);

float total = (physics + chemistry + maths)/3;

if((total<35) || physics<33 || chemistry<33 || maths<33){
  printf("your total percentage is %f , You are fail\n", total);
}
else{
    printf("your total percentage is %f , You are pass\n", total);
}
  return 0;
}