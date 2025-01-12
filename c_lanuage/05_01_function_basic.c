# include <stdio.h>
void display();// function Prototype
int main(){
  int a;
  printf("Intializing display function\n");
display();
printf("Intializing function finished it's work\n");
return 0;
}

void display(){
  printf("Hello World\n");
}