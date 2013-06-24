#include <stdio.h>

int main(int argc, char *argv[])
{
  char buffer[256];

  if (!getcwd(buffer, 256)) {
    printf("za dluga\n");
  }
  else {
    printf("%s\n", buffer);
  }
  return 0;
}
