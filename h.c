#include <stdio.h>
int main()
{
  int n2, n3;
  scanf(" %d \t  %d\n", &n2, &n3);
  n2 = n2 ^ n3;
  n3 = n2 ^ n3;
  n2 = n2 ^ n3;
  printf(" %d \t %d\n", n2, n3);
  return 0;
}
