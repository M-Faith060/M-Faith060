#include<stdio.h>
#include<stdlib.h>

int main(){
    int intialSize, newSize;
    int *array;
    
    printf("Enter the number of elements for the initial array:");
    scanf("%d", &intialSize);
    
    array =(int *)malloc(intialSize * sizeof(int));
    if(array == Null){
             printf("Memory allocation failed\n");
             return 1;
             }
             
             printf("Enter %d element :\n ", initialSize);
             for (int i = 0, &array[i]);
             }
             
             printf("initial array elements:\n");
             for(int i=0; i < initialSize; i++){
                     printf("%d", array[i]);
                     }
                     printf("\n");
                     
                     printf("Enter the new number of elements for the array:");
                     scanf("%d", &newSize);
                     
                     array = (int *)realloc(array, newSize * sizeof(int));
                     if(array == NULL){
                              printf("Memory reallocation failed!\n");
                              return 1;
                              }
                              
                              if(newSize > initialSize){
                                         printf("Enter %d more elements:\n", newSize -initialSize);
                                         for (int i = initialSize; i < newSize; i++){
                                             scanf("%d", &array[i]);
                                             }
                                             }
                                             
                                             printf("Final array elements:\n");
                                             for(int i = 0; i < newSize; i++){
                                                     printf("\n");
                                                     
                                                     free(array);
                                                     
                                                     return 0;
                                                     }
                                         
