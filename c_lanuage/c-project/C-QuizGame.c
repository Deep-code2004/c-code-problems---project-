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
  
  if(i==7)
  {
    printf("1) Which one Is The First Search Engine In Internet?\n");
    printf("a) Google\n");
    printf("b) Archie\n");
    printf("c) wais\n");
    printf("d) Altavista\n");

    printf("Enter Your Answer : ");
    scanf("%d", &ans1);

    if(ans1==2)
    {
      printf("Correct Answer\n");
      point1 = 5;
      printf("You Have Score %d Point\n\n", point1); 
    }
    else
      {
      printf("Worng Answer\n");
      point01 = 0;
      printf("You Have Score %d Point\n\n", point01); 
    }
    printf("2) Which one Is The First Computer?\n");
    printf("a) ENIAC\n");
    printf("b) UNIVAC\n");
    printf("c) IBM\n");
    printf("d) Apple\n");

    printf("Enter Your Answer : ");
    scanf("%d", &ans2);

    if(ans2==1)
    {
      printf("Correct Answer\n");
      point2 = 5;
      printf("You Have Score %d Point\n\n", point2); 
    }
    else
    {
      printf("Worng Answer\n");
      point02 = 0;
      printf("You Have Score %d Point\n\n", point02); 
    }
    printf("3) Which one Is The First Computer Virus?\n");
    printf("a) Brain\n");
    printf("b) Creeper\n");
    printf("c) Elk Cloner\n");
    printf("d) Sasser\n");
    
    printf("Enter Your Answer : ");
    scanf("%d", &ans3);
    if(ans3==1)
    {
      printf("Correct Answer\n");
      point3 = 5;
      printf("You Have Score %d Point\n\n", point3); 
    }
    else
    {
      printf("Worng Answer\n");
      point03 = 0;
      printf("You Have Score %d Point\n\n", point03); 
    }

    printf("4) Which one Is The First Computer Game?\n");
    printf("a) Tetris\n");
    printf("b) Pong\n");
    printf("c) Spacewar\n");
    printf("d) Pacman\n");

    printf("Enter Your Answer : ");
    scanf("%d", &ans4);
    if(ans4==3)
    {
      printf("Correct Answer\n");
      point4 = 5;
      printf("You Have Score %d Point\n\n", point4); 
    }
    else
    {
      printf("Worng Answer\n");
      point04 = 0;
      printf("You Have Score %d Point\n\n", point04); 
    }
    printf("5) Which one Is The First Computer Language?\n");
    printf("a) Fortran\n");
    printf("b) C\n");
    printf("c) Assembly\n");
    printf("d) Cobol\n");

    printf("Enter Your Answer : ");
    scanf("%d", &ans5);
    if(ans5==3)
    {
      printf("Correct Answer\n");
      point5 = 5;
      printf("You Have Score %d Point\n\n", point5); 
    }
    else
    {
      printf("Worng Answer\n");
      point05 = 0;
      printf("You Have Score %d Point\n\n", point05); 
    }

    total1 = point1 + point2 + point3 + point4 + point5;
    total2 = point01 + point02 + point03 + point04 + point05;
    total3 = total1 - total2;
    printf("You Have Score %d Point\n", total3);
    if(total3 >= 20)
    {
      printf("You Are The Winner\n");
    }
    else
    {
      printf("You Are The Looser\n");
    }


  }
  return 0;
}

