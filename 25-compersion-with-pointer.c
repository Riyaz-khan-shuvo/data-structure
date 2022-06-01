#include <stdio.h>
int main()
{
    int a = 50, b = 45, c = 35;
    int *p1, *p2, *p3;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    if (*p1 > *p2 && *p1 > *p3)
    {
        printf("%d is the Greatest Number\n", *p1);
    }
    else if (*p2 > *p1 && *p2 > *p3)
    {
        printf("%d is the Greatest Number\n", *p2);
    }
    else
    {
        printf("%d is the Greatest Number\n", *p3);
    }

    return 0;
}