/*Your class teacher has a list of student roll numbers stored in the order they registered. Since the list
is unsorted, you need to find whether a particular student roll number exists.*/

#include <stdio.h>
#include <stdbool.h>
#include<stdlib.h>
 void lineaeSearch( int *arr, int N , int X){
  int i =0;
    for( i =0 ; i < N ;){     
    if(X == *(arr+i) ) break;
    i++;
  }

  if(i == N) printf("Not Found"); 
  else printf("Found at index: %d",i);

 }

int main(){
    int i =0;
 int N ;//Number Student
 int X =0; // the roll number to be found 
Top:
 printf("Enter number student: ");
 scanf("%d",&N);
 if (N <= 0)
  goto Top;

 int *roll_number = malloc(N*sizeof(int)); // Array of N element to collect all student roll number
 // checking malloc failure
  if (roll_number == NULL){
      fprintf(stderr,"Memory allocation failed\n");
         return 1;
  }
 printf("Enter Students Roll Number: \n");
 for (i =0 ; i<N ;i++){
    scanf("%d",(roll_number+i));
    for(int j =0; j<i;j++){
        if (*(roll_number+i) == *(roll_number+j)){ 
        printf("Roll Number Already exits: Re-enter it.\n");
        i--;
        break;
    }
    }
 }
  printf("Enter roll to search: ");
  scanf("%d",&X);

    lineaeSearch(roll_number , N ,X);


free(roll_number);
return 0;
}