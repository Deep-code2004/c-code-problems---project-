 #include<stdio.h>
 
 int main(){
// 97-122 = a-z ASCII Values
 char ch;  
 printf("Enter a charcter\n");
 scanf("%c", &ch);
 if (ch<=122 && ch>=97){
  printf("It is a lowercase letter");
 }
 else{
  printf("It is not a lowercase letter");
  }
  return 0;
 }