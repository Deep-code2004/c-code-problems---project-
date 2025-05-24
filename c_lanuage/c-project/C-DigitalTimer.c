#include<stdio.h>
#include<time.h>//first time i used this predefine library<time.h> This is used for sleep()function
#include<unistd.h>
#include<stdlib.h>

int main (){
  int hour, minute,second;
  hour=minute=second=0;
  while(1){
    // clear output screen
    system("cls"); // system("cls") is used to clear the output screen
    // print time in HH:MM:SS format
    printf("%02d:%02d:%02d\n", hour, minute, second); // %02d is used to print 2 digits
    //clear output buffer in gcc 

    fflush(stdout);  //fflush(stdout); ensures the output is immediately shown.
    second++;// increment second
    // if second reaches 60, increment minute and reset second
    if(second==60){
      minute+=1;
      second=0;
    }
    if(minute==60){
      hour+=1;
      minute=0;
    }
    if(hour==24){
      hour=0;
      minute=0;
      second=0;
    }
    // sleep for 1 second
    sleep(1);// sleep(1) function is used to sleep for 1 second
    }
    return 0;
  // return 0 is used to indicate that the program has executed successfully
}