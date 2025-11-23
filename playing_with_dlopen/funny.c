// Compile with -rdynamic flag

#include <stdio.h>
#include <dlfcn.h>

int main()
{
  void *lib = dlopen(NULL, RTLD_NOW);
  printf("lib = %p\n", lib);
  void (*print_hello_lib)() = dlsym(lib, "print_hello");
  printf("print_hello_lib = %p\n", print_hello_lib);
  print_hello_lib();
  return 0;
}


int print_hello()
{
  printf("Hello!\n");
  return 0;
}
