#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
  int *ptr=NULL;
  int var= *ptr;


  printf("var is %d \n",var);
  printf("The pointer is %d \n",ptr);
  printf("var is %d \n",var);


}
