#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *create(int val)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}

void detectRemoveCycle(struct node *head)
{
    struct node *slow = head, *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("Cycle Detected\n");
            slow = head;
            struct node *prev = NULL;

            while (slow != fast)
            {
                prev = fast;
                slow = slow->next;
                fast = fast->next;
            }

            prev->next = NULL;
            printf("Cycle Removed\n");
            return;
        }
    }
    printf("No Cycle Detected\n");
}

void print(struct node *head)
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

int main()
{
    struct node *head;
    head = create(1);
    head->next = create(2);
    head->next->next = create(3);
    head->next->next->next = create(4);
    head->next->next->next->next = create(5);
    head->next->next->next->next->next = head->next->next;

    detectRemoveCycle(head);
    print(head);

    return 0;
}
