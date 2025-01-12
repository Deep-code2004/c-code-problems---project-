#include<stdio.h>
int sum(int a, int b);// This Sun Function takes two int arguments and return int value. 
int main(){
int c;
c = sum(2,5);
printf("The sum of two numbers is %d\n", c);
  return 0;
}

int sum(int a, int b){
  int result;
  result = a + b;
   
   return result;

}