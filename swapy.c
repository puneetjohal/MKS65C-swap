#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  //Create an array large enough to store 10 ints.
  int ray[10];
  //Populate the array with random values.
  srand( time(NULL) );
  int i;
  for (i = 0; i < 9; i++){
    ray[i] = rand();
  }
  //Set the last value in the array to 0.
  ray[9] = 0;
  //Print out the values in this array
  printf("Vales in array: ");
  for (i = 0; i < 9; i++){
    printf("%d, ", ray[i]);
  }
  printf("%d\n", ray[9]);
  return 0;
}
