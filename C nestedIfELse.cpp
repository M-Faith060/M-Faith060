/*Write a c program to determine the largest number among three integers entered by the user .The program should print "not applicable " if the three integers are equal*/
#include <stdio.h>
int main (){
    
    int x;
    int y;
    int z;
    
    //get the three integers
    printf("enter the first integer \n")
    scanf("%d",&x);
    
    printf("enter the second integer\n")
    scanf("%d",&y);
    
    printf("enter the third integer\n")
    scanf("d",&z);
    
    //determine the largest integer
    if(x>y&& x>z){
             printf("the largest number is &d\n",x);
             }
             else if(y>x && y> z){
                  printf("the largest number is %d\n"y);
                  }
                  else if(z > x && z > y){
                       printf("the largest number is %d\n",z);
                       }
                       else{
                            printf("not applicable\n");
                            }
                            return 0;
                            }
