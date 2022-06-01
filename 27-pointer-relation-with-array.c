#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        printf("%u\n", &a[i]);
    }
    printf("\n\n");
    printf("%d\n" , a); // 6618624 the address of the first element of the array
    return 0;

// output

// 6618624
// 6618628
// 6618632
// 6618636
// 6618640

// 6618624 the address of the first element of the array
}