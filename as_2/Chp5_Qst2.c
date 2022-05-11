#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>
#include <sys/wait.h>

int main(int argc, char *argv[])
{
    close(STDOUT_FILENO);
    open("./question5.output", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);
    int rc = fork();

  if (rc < 0)
    {
        // fork failed; exit
        fprintf(stderr, "fork failed\n");
        exit(1);
    }
  else if (rc == 0)
    {
      for(int i=0; i<1000;i++)
        {

          printf("I am the CHILD\n");

        }
    }

  else
    {
         for(int i=0; i<1000;i++)
          {

            printf("I am the PARENT\n");

          }
    }
printf("\n");

    return 0;
}
