// Circular Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;

struct node *create_node(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    return temp;
}

void insert_end()
{
    int value;
    printf("Enter value to insert at end: ");
    scanf("%d", &value);
    struct node *new_node = create_node(value);

    if (head == NULL)
    {
        head = new_node;
        new_node->next = head;
        return;
    }

    struct node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->next = head;
}

void display()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    printf("Circular Linked List: ");
    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(back to head)\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\nMENU:\n1. Insert at End\n2. Display\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_end();
            break;
        case 2:
            display();
            break;
        case 3:
            printf("Exiting.\n");
            return 0;
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
