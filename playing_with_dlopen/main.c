#include <stdio.h>
#include <dlfcn.h>

int main()
{
  void *lib = dlopen("raylib-5.5_linux_amd64/lib/libraylib.so", RTLD_NOW);
  printf("lib = %p\n", lib);
  void (*InitWindow)(int width, int height, const char *title) = dlsym(lib, "InitWindow");
  void (*WindowShouldClose)(void) = dlsym(lib, "WindowShouldClose");
  printf("InitWindow = %p\n", InitWindow);
  InitWindow(400, 400, "My Window");

  return 0;
}
