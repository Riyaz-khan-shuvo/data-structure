#include <stdio.h>
int main()
{
    int x = 10;
    printf("%d\n", x);

    printf("%p\n" , &x);

    int y =10;

    int *ptr;
    ptr = &y;
    printf("%d\n" , *ptr);
    printf("%p\n" , ptr);

    return 0;
}