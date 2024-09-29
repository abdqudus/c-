#include <stdio.h>

int main()
{
  int a,b, *ptr_a, *ptr_b;
  a=5;
  b=10;
  ptr_a = &a;
  ptr_b = &b;
  *ptr_a = *ptr_b;
  printf("%d", a);
}