#include<stdio.h>

int main(){

  int n=3, prime=1;
  for(int i=2; i<n;i++){
    if(n%i==0){
      prime = 0;
      break;
    }
  }

  if(prime==0 && n!=2){
    printf("This is not a primw number");
  }
  else{
    printf("This is prime number");
  }
  return 0;
}