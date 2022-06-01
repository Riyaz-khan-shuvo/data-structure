#include <stdio.h>
#define CAPACITY 3
int stack[CAPACITY];
int top = -1;

void push(int x)
{
    if (top < CAPACITY - 1)
    {
        top += 1;
        stack[top] = x;
        // printf("Successful added items : %d\n", x);
    }
    else
    {
        printf("Exception! No spaces\n");
    }
}
int pop()
{
    if (top >= 0)
    {
        int value = stack[top];
        top -= 1;
        return value;
    }
    else
    {
        printf("Exception! Empty Array\n");
    }

    return -1;
}
int peek()
{
    if (top >= 0)
    {
        return stack[top];
    }
    printf("Exception from peek! Empty Peek\n");

    return -1;
}

int main()
{
    peek();
    push(2);
    push(3);
    push(5);

    for (int i = 0; i < CAPACITY; i++)
    {
        printf("%d\n", stack[i]);
    }
    pop();
    pop();
    pop();
    pop();
    printf("The peek element is : %d", peek());

    return 0;
}

// // declaring of a structure

// struct Student
// {
//     char isbn[15];
//     int pages;
//     float price;
// };
