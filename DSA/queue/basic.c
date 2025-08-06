// Queue Basic Implementation using Array
#include <stdio.h>

#define MAX 50

int Q[MAX];
int R = -1, F = -1;

void insertion()
{
    int data;
    if (R == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }

    printf("Enter data to insert: ");
    scanf("%d", &data);

    if (F == -1 && R == -1)
    {
        F = R = 0;
        Q[R] = data;
    }
    else
    {
        R++;
        Q[R] = data;
    }
}

void display()
{
    if (F == -1 || F > R)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue: ");
    for (int i = F; i <= R; i++)
    {
        printf("%d ", Q[i]);
    }
    printf("\n");
}

void deletion()
{
    if (F == -1 || F > R)
    {
        printf("Queue Underflow\n");
        return;
    }

    printf("Deleted element: %d\n", Q[F]);
    F++;

    if (F > R)
    {
        F = R = -1;
    }
}

void update()
{
    int index, val;
    printf("Enter index and Value : ");
    scanf("%d %d", &index, &val);
    for (int i = F; i <= R; i++)
    {
        if (index == i)
        {
            Q[index] = val;
            break;
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n--- Queue Operations ---\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Update\n5.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            update();
            break;
        case 5:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice.\n");
        }
    }
}
