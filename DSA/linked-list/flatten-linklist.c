#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int val;
    struct Node *prev;
    struct Node *next;
    struct Node *child;
};

struct Node *createNode(int val)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->val = val;
    node->prev = NULL;
    node->next = NULL;
    node->child = NULL;
    return node;
}

struct Node *flattenList(struct Node *prev, struct Node *curr)
{
    if (!curr)
        return prev;

    curr->prev = prev;
    prev->next = curr;

    struct Node *next = curr->next;
    struct Node *tail = flattenList(curr, curr->child);
    curr->child = NULL;

    return flattenList(tail, next);
}

struct Node *flatten(struct Node *head)
{
    if (!head)
        return NULL;

    struct Node *tmp = createNode(0);
    flattenList(tmp, head);

    head->prev = NULL;
    free(tmp);
    return head;
}

void printList(struct Node *head)
{
    printf("Flattened List: ");
    while (head)
    {
        printf("%d -> ", head->val);
        head = head->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node *n1 = createNode(1);
    struct Node *n2 = createNode(2);
    struct Node *n3 = createNode(3);
    struct Node *n4 = createNode(4);
    struct Node *n5 = createNode(5);

    n1->next = n2;
    n2->prev = n1;
    n2->next = n3;
    n3->prev = n2;
    n3->next = n4;
    n4->prev = n3;
    n4->next = n5;
    n5->prev = n4;

    struct Node *c1 = createNode(7);
    struct Node *c2 = createNode(8);
    struct Node *c3 = createNode(9);

    c1->next = c2;
    c2->prev = c1;
    c2->next = c3;
    c3->prev = c2;

    n3->child = c1;

    // Level 1: 1 - 2 - 3 - 4 - 5
    //                  |
    // Level 2:         7 - 8 - 9
    printf("Flattening list...\n");
    struct Node *flat = flatten(n1);

    printList(flat);
    return 0;
}