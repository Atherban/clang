// Implementation of Priority Queue using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int priority;
    struct node *next;
};

struct node *front = NULL;
struct node *create(int data, int priority)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->priority = priority;
    temp->next = NULL;
    return temp;
}

void insert(int data, int priority)
{
    struct node *newNode = create(data, priority);
    if (front == NULL || priority < front->priority)
    {
        newNode->next = front;
        front = newNode;
    }
    else
    {
        struct node *temp = front;
        while (temp->next != NULL && temp->next->priority <= priority)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    printf("Inserted %d with priority %d\n", data, priority);
}
void delete()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    struct node *temp = front;
    front = front->next;
    printf("Deleted %d with priority %d\n", temp->data, temp->priority);
    free(temp);
}

void display()
{
    if (front == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    struct node *temp = front;
    printf("Priority Queue:\n");
    while (temp != NULL)
    {
        printf("Data: %d | Priority: %d\n", temp->data, temp->priority);
        temp = temp->next;
    }
}

int main()
{
    int choice, data, priority;

    while (1)
    {
        printf("\n--- Priority Queue Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data and priority: ");
            scanf("%d %d", &data, &priority);
            insert(data, priority);
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
