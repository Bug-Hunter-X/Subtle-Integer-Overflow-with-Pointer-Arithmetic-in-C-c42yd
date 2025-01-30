#include <stdio.h>
#include <limits.h>

int main() {
  int x = 10;
  int *ptr = &x;
  // Check if adding 1 to ptr would cause an overflow
  if ((ptr + 1) - (void *)ptr <= 0) {
    printf("Error: Adding 1 to pointer causes an overflow!\n");
  } else {
    *ptr = 20;
    printf("%d\n", x);
  }
  return 0;
}
