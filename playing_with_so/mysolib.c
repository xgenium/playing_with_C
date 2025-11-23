#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static __attribute__((constructor)) void init_method()
{
  pid_t parent = getpid();
  printf("Parent = %d\n", parent);

  if (fork() == 0) {
    for (;;) {
      if (getpgid(parent) < 0) {
        printf("Goodbye parent!");
        exit(0);
      }

      printf("Test\n");
      system("sleep 1");
    }
  }
}
