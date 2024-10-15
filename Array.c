#include <stdio.h>

//include to compute the average of an array of scores
float computeAverage(int scores[ ], int size) {
      int sum=0;
      for(int i=0; i < size; i++) {
              sum+=scores[i];
              }
              return (float)sum / size;
              }
              int main() {
                  // Array to hold scores of 10 students
                  int scores{[10];
                  int size=10;
                  
                  //input scores
                  prntf("student %d: ",i + 1);
                  scanf("%d", &scores[i]);
                  }
                  
                  // Compute the average score
                  float average = computeAverage(scores,size);
                  
                  //output the average score
                  printf"The average class mark is: %.2f\n",average);
                  
                  return 0;
                  
                  } 
