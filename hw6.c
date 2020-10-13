#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  srand(time(NULL));

  int arr[10];
  int *arrp = arr;

  int i;
  for (i = 0; i < 10; i++)
    arr[i] = rand();
  arr[9] = 0;

  for (i = 0; i < 10; i++)
    printf("index %d: %d\n", i, arr[i]);

  printf("\n");

  int ray[10];
  int * rayp = ray;

  for (i = 0; i < 10; i++)
    *(rayp + i) = *(arrp + 9 - i);


  for (i = 0; i < 10; i++)
    printf("index %d: %d\n", i, ray[i]);
}
