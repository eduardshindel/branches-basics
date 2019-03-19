#include <stdio.h>

int sqr(int *a)
{
    *a *= *a;
    
    return *a;
}

int main()
{
    int a;
    
    scanf("%d", &a);
    
    sqr(&a);
    
    printf("%d\n", a);
    
    return 0;
}