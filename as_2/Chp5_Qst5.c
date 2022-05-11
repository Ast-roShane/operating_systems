#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include <stdlib.h>
int main()
{
int rc = fork();
int x =wait(NULL);

  if (rc < 0)
  {
      // fork failed; exit
      fprintf(stderr, "fork failed\n");
      exit(1);
  }
    else if (rc == 0)
      {
      //  wait(NULL);
      //  printf("HC: hello from child(pid:%d)\n", (int) getpid());
       printf("HC: hello from child(pid:%d) (wait:%d)\n",(int) getpid(),x);

      }

    else
      {
        //printf("HP: hello from parent (pid:%d)\n", (int) getpid());
       printf("HP: hello from parent (pid:%d) (wait:%d)\n",(int) getpid(),x);
       wait(NULL);
        printf("CT: child has terminated\n");
      }

    printf("Bye\n");
    return 0;
}
