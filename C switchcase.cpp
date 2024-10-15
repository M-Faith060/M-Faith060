/* Write a c program that prints days of the week and respective activities in a specific day using 
switch statement.*/
#include <stdio.h>

int main(){
    
    int day;
    
    // ask the user for the day of the week
    printf("enter any day of the week between 1-7");
    scanf("%d",&day);
    
    switch(day){
                case 1:
                     printf"Monday\n");
                     printf("Attend lectures");
                     break;
                     
                     case 2:
                          printf("Tuesday\n");
                          printf("take a nap");
                          break;
                          
                          case 3:
                               printf("Wednesday\n");
                               printf("visit the childrens home");
                               break;
                               
                               case 4:
                                    printf("Thursday\n");
                                    printf("watch movie");
                                    break;
                                    
                                    case 5:
                                         printf("Friday\n");
                                         printf("Protests");
                                         break;
                                         
                                         case 6:
                                              printf("Saturday\n");
                                              printf("Attend choir");
                                              break;
                                              
                                              case 7:
                                                   printf("Sunday\n");
                                                   printf("Go to church");
                                                   break;
                                                   
                                                   default:
                                                           printf("invalid input\n");
                                                           printf("please enter a number 1-7");
                                                           
                                                           return 0; 
}
