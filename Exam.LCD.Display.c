// LCD display Homework code
// 98.99% convert code
// @author original java code by Aj prasan @ECP Rmuit kkc
// convert code to c by Thanapun Thongjurai @ECP1N Rmuit kkc
// test and arrange c code by Nonthwat zaza @ECP1N Rmuit kkc
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void LCDPRINTF(int length ,char Number[]){
                      //0   1   2   3   4   5   6   7   8
  char LCD[10][10] = {{'E','-','|',' ','|','-','|','E','|'},  //0
                      {'E',' ',' ',' ','|',' ',' ','E','|'},  //1
                      {'E','-',' ','-','|','-','|','E',' '},  //2
                      {'E','-',' ','-','|','-',' ','E','|'},  //3
                      {'E',' ','|','-','|',' ',' ','E','|'},  //4
                      {'E','-','|','-',' ','-',' ','E','|'},  //5
                      {'E','-','|','-',' ','-','|','E','|'},  //6
                      {'E','-',' ',' ','|',' ',' ','E','|'},  //7
                      {'E','-','|','-','|','-','|','E','|'},  //8
                      {'E','-','|','-','|','-',' ','E','|'},  //9
                      };

  //int length = 0;
  //char Number[10];
  //scanf("%d",&length);
  //scanf("%s",Number);
  for(int segmentNo=1;segmentNo<=5;segmentNo++){
    if(segmentNo%2!=0){
      for(int i=0;i<strlen(Number);i++){
        int postNo = Number[i]-48;
        printf(" ");
        for(int j=0;j<length;j++){
          printf("%c",LCD[postNo][segmentNo]);
        }
        printf(" ");
      }
      printf(" \n");
    }
    else{
      for(int k=0;k<length;k++){
        if(segmentNo==2){
          for(int i=0;i<strlen(Number);i++){
            int postNo = Number[i]-48;
            printf("%c",LCD[postNo][2]);
            for(int j=0;j<length;j++){
              printf(" ");
            }
            printf("%c",LCD[postNo][4]);
          }
          printf(" \n");
        }
        else{
          for(int i=0;i<strlen(Number);i++){
            int postNo = Number[i]-48;
            printf("%c",LCD[postNo][6]);
            for(int j=0;j<length;j++){
              printf(" ");
            }
            printf("%c",LCD[postNo][8]);
          }
          printf(" \n");
        }
      }
    }
  }
}

void main(){
  printf("LCD.DISPLAY PROGRAM CHALLANGE\n");
  int length = 1;
  char Number[100];
  while(length > 0)
  {

    printf("EXAMPLE :5 123456789\n");
    printf("ENTER NUMBER LENGTH AND NUMBER :");
    scanf("%d",&length);
    scanf("%s",Number);
    if(length > 0)
        LCDPRINTF(length, Number);
  }
  printf("\n\n***************************END PROGRAM***************************\n\n");
}
