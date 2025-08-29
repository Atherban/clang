// Double ended queue
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int deque[MAX];
int front = -1, rear = -1;

void insertFront(int val)
{
    if (front == 0)
    {
        printf("Cannot insert at front. Front is at beginning.\n");
        return;
    }
    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        front--;
    }
    deque[front] = val;
    printf("Inserted %d at front.\n", val);
}

void insertRear(int val)
{
    if (rear == MAX - 1)
    {
        printf("Overflow! Cannot insert at rear.\n");
        return;
    }
    if (front == -1)
    {
        front = rear = 0;
    }
    else
    {
        rear++;
    }
    deque[rear] = val;
    printf("Inserted %d at rear.\n", val);
}

void deleteFront()
{
    if (front == -1)
    {
        printf("Underflow! Queue is empty.\n");
        return;
    }
    printf("Deleted %d from front.\n", deque[front]);
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void deleteRear()
{
    if (rear == -1)
    {
        printf("Underflow! Queue is empty.\n");
        return;
    }
    printf("Deleted %d from rear.\n", deque[rear]);
    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        rear--;
    }
}

void display()
{
    if (front == -1)
    {
        printf("Deque is empty.\n");
        return;
    }
    printf("Deque: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", deque[i]);
    }
    printf("\n");
}

int main()
{
    int choice, val;

    while (1)
    {
        printf("\n--- Deque Menu ---\n");
        printf("1. Insert at Front\n");
        printf("2. Insert at Rear\n");
        printf("3. Delete from Front\n");
        printf("4. Delete from Rear\n");
        printf("5. Display\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &val);
            insertFront(val);
            break;
        case 2:
            printf("Enter value: ");
            scanf("%d", &val);
            insertRear(val);
            break;
        case 3:
            deleteFront();
            break;
        case 4:
            deleteRear();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
