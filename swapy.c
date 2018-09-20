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
  printf("Values in ray:\n");
  for (i = 0; i < 10; i++){
    printf("ray[%d] = %d \n", i, ray[i]);
  }
  //Create a separate array large enough to store 10 ints.
  int yar[10];
  //USING ONLY POINTERS (that is, do not use the array variables) do the following:
    //Populate the second array with the values in the first but in reverse order
  for (i = 0; i < 10; i++){
    *(yar + i) = *(ray + (9-i));
  }
  //Print out the values in the second array
  printf("Values in yar: \n");
  for (i = 0; i < 10; i++){
    printf("yar[%d] = %d \n", i, yar[i]);
  }
  return 0;
}
