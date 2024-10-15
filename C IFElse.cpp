/*
Write a program that test whether a number entered by the user is even or odd*/
#include <stdio.h>
int main(){
    
    int j;
    
    //get the number from the user
    printf("Enter a number;");
    scanf("%d",&j);
    
    //check if the number is even or odd
    
    if(j% 2==0){
          
          printf("%d is an even number.\n",j);
          }
          else{
               printf"%d is an odd number .\n",j);
               }
               return 0;
               }
