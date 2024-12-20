#include<stdio.h>

int main(){

  // int a; b = a;
  // int v = 3 ^ 3;
  // char dt = '21';
  // float d = (3.0/8-2);
  // printf("%d", v);
  // printf("%f", d);

/*Q3. Write a Program to determine whether a number is divisible by 97 or not */
int num; 
printf("Enter the number\n");
scanf("%d", &num); 
printf("Divisibility test returns : %d", num % 97);


// Q4. Step by Step evaluation of 3 * X/y - z + k
int x = 2, y = 3, z = 3, k = 1;
int result = 3 * x / y - z + k; 

/*

6/3 - 3 + 1
2 - 3 + 1 
-1 + 1
0
*/
printf(" The value of result is %d", result);
  return 0;
}