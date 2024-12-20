#include<stdio.h>

int main(){
int a = 4;
int b = 8;
int z = b * a;

/* you will not write this way  b * a = z
you have to wite this way z = b * a */

printf("The value of a + b is : %d\n", a + b);
printf("The value of a - b is : %d\n", a - b);
printf("The value of a * b is : %d\n", a * b);
printf("The value of a / b is : %d\n", a / b);
printf("The value of z is : %d\n", z);


//this three have same answer why because sign is same as numerator (-5%2=-1)
printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);

//no operator is assumed to be present 
//printf ("The value of 4 * 5 is %d\n", (4)(5)); --> will not return 20 / wrong !!
printf("The value of 4 * 5 is %d\n", (4)*(5));

//There is no operator to perform exponentiation in c 
printf("The value of 4 ^ 5 is %d\n", 4^5); //--> will not produce 4 to the power 5

printf("The value of 4 to the power 5 is %f\n", pow(2, 5));// for this we have to put this in header section --> # include <math.h> 

printf("The value of 6 + 5 %d\n", 6 + 5);
printf("The value of 6 + 5.6 %f\n", 6 + 5.6);
printf("The value of 6.1 + 5.6 %f\n", 6.1 + 5.6);
printf("The value of 3.0/9 %d\n", 3.0 / 9);

  return 0;
}