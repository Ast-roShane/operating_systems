#include <stdio.h>
#include <stdlib.h>

int main()
{

  const int INSTANCES = 10;
  int num,avg;
  int sum = 0;
  FILE *fp;
  FILE *afp;

  fp = fopen("input.txt","r");

  afp = fopen("avg.txt","w");

  if ((fp = fopen("input.txt","r")) == NULL)
    {
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
    }
  if ((afp = fopen("avg.txt","w")) == NULL)
      {
         printf("Error! opening file");
         // Program exits if the file pointer returns NULL.
         exit(1);
      }

//fscanf(fptr,"%d",&num);
for(int i=0; i<INSTANCES; i++)
  {
    if(num != EOF)
      {
        fscanf(fp,"%d",&num);
        sum = num + sum;

      }
    else
      {
        break;
      }
  }

  avg = (sum / (i));


  fprintf(afp,"The average is: %d \n", avg);

   fclose(afp);

   return 0;

}
