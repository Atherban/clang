// WAP to add two Linked List and store it in another linked list : Leetcode

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *createNode(int data)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void append(struct node **head, int data)
{
    struct node *newNode = createNode(data);
    if (*head == NULL)
    {
        *head = newNode;
        return;
    }
    struct node *temp = *head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

struct node *addTwoNumbers(struct node *l1, struct node *l2)
{
    struct node *result = NULL;
    struct node **curr = &result;

    int carry = 0;
    while (l1 || l2 || carry)
    {
        int sum = carry;
        if (l1)
        {
            sum += l1->data;
            l1 = l1->next;
        }
        if (l2)
        {
            sum += l2->data;
            l2 = l2->next;
        }

        carry = sum / 10;
        *curr = createNode(sum % 10);
        curr = &((*curr)->next);
    }

    return result;
}

void printList(struct node *head)
{
    while (head)
    {
        printf("%d", head->data);
        if (head->next)
            printf(" -> ");
        head = head->next;
    }
    printf(" -> NULL\n");
}

int main()
{
    // 342 : 2 -> 4 -> 3
    struct node *l1 = NULL;
    append(&l1, 2);
    append(&l1, 4);
    append(&l1, 3);

    // 465 : 5 -> 6 -> 4
    struct node *l2 = NULL;
    append(&l2, 5);
    append(&l2, 6);
    append(&l2, 4);

    //  807  7 -> 0 -> 8
    struct node *result = addTwoNumbers(l1, l2);

    printf("First Number:    ");
    printList(l1);
    printf("Second Number:   ");
    printList(l2);
    printf("Sum as List:     ");
    printList(result);

    return 0;
}
