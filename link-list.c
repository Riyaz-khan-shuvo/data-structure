#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int Data;
    struct Node *Next;
};

int main()
{
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    a = (struct Node *)malloc(sizeof(struct Node));
    b = (struct Node *)malloc(sizeof(struct Node));
    c = (struct Node *)malloc(sizeof(struct Node));

    a->Data = 10;
    b->Data = 20;
    c->Data = 30;

    a->Next = b;
    b->Next = c;
    c->Next = NULL;

// traversing the link list

    while (a != NULL)
    {
        printf("%d ", a->Data);
        a = a->Next;
    }
    printf("\n %p" , &a);
    printf("\n %p" , &b);
    printf("\n %p" , &c);

    return 0;
}