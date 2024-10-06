#include <stdio.h>
void func(int *, int *);
int main()
{
    int x=6;
    int y=5;
    func(&x,&y);
    printf("x and y from the main function %d %d\n", x,y);
    return 0;
}
void func(int *x,int * y)
{
    *x=5;
    *y=6;
 
    printf("x and y from the called function   %d %d\n", *x,*y);
} 