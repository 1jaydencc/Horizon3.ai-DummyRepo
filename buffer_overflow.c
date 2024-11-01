#include <stdio.h>

int add(int a, int b)
{
  return 2 * a + b;
}

int main()
{
  int x = 5;
  int y = 10;
  int result = add(x, y);

  printf("The result is: %d\n", result);

  return 0;
}
