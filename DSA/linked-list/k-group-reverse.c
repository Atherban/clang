// Leetcode : K group based reversing of Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *create(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}

void insert_end(int val)
{
    struct node *new_node = create(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
}

void display()
{
    struct node *temp = head;
    printf("Linked List: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

struct node *get_kth_node(struct node *curr, int k)
{
    while (curr != NULL && k > 1)
    {
        curr = curr->next;
        k--;
    }
    return curr;
}

struct node *reverseKGroup(struct node *head, int k)
{
    if (head == NULL || k == 1)
        return head;

    struct node dummy;
    dummy.next = head;
    struct node *group_prev = &dummy;

    while (1)
    {
        struct node *kth = get_kth_node(group_prev->next, k);
        if (kth == NULL)
            break;

        struct node *group_next = kth->next;

        struct node *prev = group_next;
        struct node *curr = group_prev->next;

        while (curr != group_next)
        {
            struct node *tmp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = tmp;
        }

        struct node *tmp = group_prev->next;
        group_prev->next = kth;
        group_prev = tmp;
    }

    return dummy.next;
}

int main()
{
    int n, k, val;
    printf("Enter number of elements in list: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &val);
        insert_end(val);
    }

    printf("Enter group size k: ");
    scanf("%d", &k);

    printf("Original List:\n");
    display();

    head = reverseKGroup(head, k);

    printf("Reversed in Groups of %d:\n", k);
    display();

    return 0;
}
