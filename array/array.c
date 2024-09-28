#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,61,7,8,9,103};
    int even_count=0, odd_count=0;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i] % 2 ==0)
        {
            even_count=even_count+1;
        }
        else
        {
            odd_count=odd_count+1;
        }
    }
    
printf("There are %d even numbers and %d odd numbers in the array", even_count, odd_count);
    return 0;
}



