//Counting Odd Nodes Value

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE first, int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("| %d | -> ",first->data);
        first = first->next;
    }
    printf("NULL\n");
}

int CountODD(PNODE first)
{
    int iCount = 0;

    while (first != NULL)
    {
        if(first->data % 2 != 0)
        {
            iCount++;
        }
        first = first->next;
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;

    int iRet = 0;

    InsertLast(&head,11);
    InsertLast(&head,21);
    InsertLast(&head,50);
    InsertLast(&head,101);
    InsertLast(&head,100);
    InsertLast(&head,121);

    Display(head);

    iRet = CountODD(head);

    printf("Numbers of Odd Value is %d",iRet);

    return 0;
}