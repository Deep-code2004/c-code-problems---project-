#include<stdio.h>

int maiin(){
  int i;
  int ans1, ans2, ans3, ans4, ans5;
  int point1, point2, point3, point4, point5, point6, point7, point8, point9, point10;
  int point01, point02, point03, point04, point05, point06, point07, point08, point09, point010;
  int total1, total2, total3;

  printf(" Wellcome to The Game\n\n");
  printf("> Press 7 to Start The Game\n");
  printf("Press 0 to Quit The Game\n");

  scanf("%d", &i);

  if(i==7)
  {
    printf("The Game Has Started \n\n");
  }
  else if(i==0)
  {
    printf("The Game Has Ended\n\n");
  }
  else
  {
     printf("Invalid\n\n");
  }

}