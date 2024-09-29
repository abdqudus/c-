#include <stdio.h>

int main()
{
  int a,b, *ptr_a, **ptr_b, ***ptr_c;
  a=5;
  b=10;
  ptr_a=&a;
  ptr_b=&ptr_a;
  ptr_c=&ptr_b;
  ***ptr_c=15;
  printf("%d %d %d", a, *ptr_a, **ptr_b);
  
  
}
// 