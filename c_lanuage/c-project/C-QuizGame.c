#include<stdio.h>

int main() {
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int point1 = 0, point2 = 0, point3 = 0, point4 = 0, point5 = 0;
    int total;

    printf("Welcome to The Game\n\n");
    printf("> Press 7 to Start The Game\n");
    printf("Press 0 to Quit The Game\n");

    scanf("%d", &i);

    if(i == 7) {
        printf("The Game Has Started \n\n");
    } else if(i == 0) {
        printf("The Game Has Ended\n\n");
        return 0;
    } else {
        printf("Invalid\n\n");
        return 0;
    }

    printf("1) Which one Is The First Search Engine In Internet?\n");
    printf("a) Google\n");
    printf("b) Archie\n");
    printf("c) wais\n");
    printf("d) Altavista\n");
    printf("Enter Your Answer (1-4): ");
    scanf("%d", &ans1);
    if(ans1 == 2) {
        printf("Correct Answer\n");
        point1 = 5;
    } else {
        printf("Wrong Answer\n");
    }
    printf("You Have Scored %d Point\n\n", point1);

    printf("2) Which one Is The First Computer?\n");
    printf("a) ENIAC\n");
    printf("b) UNIVAC\n");
    printf("c) IBM\n");
    printf("d) Apple\n");
    printf("Enter Your Answer (1-4): ");
    scanf("%d", &ans2);
    if(ans2 == 1) {
        printf("Correct Answer\n");
        point2 = 5;
    } else {
        printf("Wrong Answer\n");
    }
    printf("You Have Scored %d Point\n\n", point2);

    printf("3) Which one Is The First Computer Virus?\n");
    printf("a) Brain\n");
    printf("b) Creeper\n");
    printf("c) Elk Cloner\n");
    printf("d) Sasser\n");
    printf("Enter Your Answer (1-4): ");
    scanf("%d", &ans3);
    if(ans3 == 1) {
        printf("Correct Answer\n");
        point3 = 5;
    } else {
        printf("Wrong Answer\n");
    }
    printf("You Have Scored %d Point\n\n", point3);

    printf("4) Which one Is The First Computer Game?\n");
    printf("a) Tetris\n");
    printf("b) Pong\n");
    printf("c) Spacewar\n");
    printf("d) Pacman\n");
    printf("Enter Your Answer (1-4): ");
    scanf("%d", &ans4);
    if(ans4 == 3) {
        printf("Correct Answer\n");
        point4 = 5;
    } else {
        printf("Wrong Answer\n");
    }
    printf("You Have Scored %d Point\n\n", point4);

    printf("5) Which one Is The First Computer Language?\n");
    printf("a) Fortran\n");
    printf("b) C\n");
    printf("c) Assembly\n");
    printf("d) Cobol\n");
    printf("Enter Your Answer (1-4): ");
    scanf("%d", &ans5);
    if(ans5 == 3) {
        printf("Correct Answer\n");
        point5 = 5;
    } else {
        printf("Wrong Answer\n");
    }
    printf("You Have Scored %d Point\n\n", point5);

    total = point1 + point2 + point3 + point4 + point5;
    printf("You Have Scored %d Points\n", total);
    if(total >= 20) {
        printf("You Are The Winner\n");
    } else {
        printf("You Are The Loser\n");
    }

    return 0;
}