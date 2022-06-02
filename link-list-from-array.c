#include <stdio.h>
#include <stdlib.h>
struct Node *createLinkList(int arr[], int size);

struct Node
{
    int Data;
    struct Node *Next;
};

int main()
{
    int arr[] = {5, 10, 15};

    struct Node *head = NULL;

    head = createLinkList(arr, 3);

    while (head != NULL)
    {
        printf("%d ", head->Data);
        head = head->Next;
    }

    return 0;
}

struct Node *createLinkList(int arr[], int size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;

    for (int i = 0; i < size; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->Data = arr[i];
        temp->Next = NULL;
        if (head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->Next = temp;
            current = current->Next;
        }
    }
    return head;
}