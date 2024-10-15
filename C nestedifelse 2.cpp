/*
write a c program to generate the following grading system
score       grade
75-100        A
65-74         B
55-64         C
45-54         D
0-44          E
Above 100     invalid grade
*/

# include<stdio.h>

int main(){
    
    int score;
    // ask the user for the score
    printf("enter your exam score\n",);
    scanf("%d",&score);
    
    // determine the grade
    if(score >= 75 && score <= 100){
             printf("A");
             }
             else if (score >= 65 && score <=74){
                  printf("B");
                  }
                  else if (score >= 55 && score <= 64){
                       printf("C");
                       }
                       else if (score >= 45 && score <= 54){
                            printf("D");
                            }
                            else if (score >= 0 && score <= 44){
                                 printf("E");
                                 }
                                 else{
                                      printf("invalid grade");
                                      }
                                      return 0;
                                      }
}
