#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  //int array[200]={1,2,3,4,5,6};
  int* data=malloc(100*sizeof(int));
  int* ptr= (int*)malloc(sizeof(int)*100);
  free(data+50);
  //printf("%d\n", ptr[3]);
  return 0;
}
