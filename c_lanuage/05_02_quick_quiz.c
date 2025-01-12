#include<stdio.h>
void GoodMorging();  // function Prototype1
void GoodAfternoon(); // function Prototype2
void GoodNight();   // function Prototype3
int main(){
  GoodMorging();
  GoodAfternoon();
  GoodNight();
   
   return 0;
}

void GoodMorging(){
  printf("Good Morging\n");
}
void GoodAfternoon(){
  printf("Good Afternoon\n");
}
void GoodNight(){
  printf("Good Night\n"); 
}
