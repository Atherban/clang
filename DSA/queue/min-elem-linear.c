#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int queue[MAX];
int front = -1, rear = -1;
int minVal;

void insert(int data)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow!\n");
        return;
    }
    if (front == -1)
    {
        front = 0;
        minVal = data;
    }
    queue[++rear] = data;
    if (data < minVal)
    {
        minVal = data;
    }

    printf("Inserted %d\n", data);
}

void delete()
{
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow!\n");
        return;
    }
    int removed = queue[front++];
    if (removed == minVal)
    {
        minVal = queue[front];
        for (int i = front; i <= rear; i++)
        {
            if (queue[i] < minVal)
            {
                minVal = queue[i];
            }
        }
    }

    printf("Deleted %d\n", removed);
}

void getMin()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Minimum Element: %d\n", minVal);
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main()
{
    int choice, data;

    while (1)
    {
        printf("\n--- Linear Queue Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Get Minimum\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter data: ");
            scanf("%d", &data);
            insert(data);
            break;
        case 2:
            delete();
            break;
        case 3:
            display();
            break;
        case 4:
            getMin();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}
