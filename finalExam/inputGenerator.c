// C program for generating a
// random number in a given range.
#include <stdio.h>
#include <stdlib.h>

int main()
{
  const int INSTANCES = 10;
  FILE *fp;
  fp = fopen("input.txt","w");

  if(fp == NULL)
  {
    printf("Error!");
    exit(1);
  }

  for(int i=0;i<INSTANCES;i++)
    {
      int num =(rand() % (100 - 2 + 1)) + 2;
      fprintf(fp,"%d \n",num);
    }
 fclose(fp);

 return 0;
}
