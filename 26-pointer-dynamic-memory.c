#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr1 , *ptr2; 

    ptr1 = (int *) malloc(7 *sizeof(int));

    // or 

    // ptr = (int *) malloc(20);

    // the same method by using calloc 

    ptr2 = (int *) calloc(5 , sizeof(int));

    if (ptr2!=NULL)
    {
        printf("size of the memory : %d\n" , sizeof(ptr2));
    }
    else
    {
        printf("Memory Does not allocate!\n");
    }
    printf("The size of int : %d" , sizeof(int));
        

    return 0;
}