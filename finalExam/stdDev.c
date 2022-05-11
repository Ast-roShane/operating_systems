#include <stdio.h>
#include <stdlib.h>

int main()
{
  const int INSTANCES = 10
  int num,anum,sqr,fnl;
  int sum=0;



  fp = fopen("input.txt","r");
  afp = fopen("avg.txt","r");

  if ((fp = fopen("input.txt","r")) == NULL)
    {
       printf("Error! opening file");
       // Program exits if the file pointer returns NULL.
       exit(1);
    }
  if ((afp = fopen("avg.txt","r")) == NULL)
      {
         printf("Error! opening file");
         // Program exits if the file pointer returns NULL.
         exit(1);
      }

      int rc = fork();
      if (rc < 0)
      {
          // fork failed; exit
          fprintf(stderr, "fork failed\n");
          exit(1);
      }
      else if (rc == 0)// child
      {

      }
      else//parent
      {
        wait(); 
          // parent goes down this path (original process)
          for(int i=0; i<INSTANCES; i++)
            {
              if(num != EOF)
                {
                  fscanf(afp,"%d",&anum)
                  fscanf(fp,"%d",&num);
                  sum = num - anum;
                  sqr= sum * sum;

                }
              else
                {
                  break;
                }
            }

      }





      fnl= sqrt(sqr/i);

      printf("The square root of file %d is %d", &INSTANCES, &fnl);




}
