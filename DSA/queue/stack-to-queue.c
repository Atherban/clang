// Converting stack into Queue using a temp stack
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int st1[MAX], st2[MAX];
int top1 = -1, top2 = -1;

// Stack push
void push(int stack[], int *top, int value)
{
    if (*top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++(*top)] = value;
}

// Stack pop
int pop(int stack[], int *top)
{
    if (*top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[(*top)--];
}

// Insert into queue
void insert()
{
    int val;
    printf("Enter value to insert: ");
    scanf("%d", &val);
    push(st1, &top1, val);
    printf("Inserted: %d\n", val);
}

// Delete from queue
void delete()
{
    if (top1 == -1)
    {
        printf("Queue is empty!\n");
        return;
    }

    // Move elements from st1 to st2
    while (top1 != -1)
    {
        int val = pop(st1, &top1);
        push(st2, &top2, val);
    }

    int deleted = pop(st2, &top2);
    printf("Deleted: %d\n", deleted);

    // Move remaining elements back to st1
    while (top2 != -1)
    {
        int val = pop(st2, &top2);
        push(st1, &top1, val);
    }
}

// Display queue
void display()
{
    if (top1 == -1)
    {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue: ");
    for (int i = 0; i <= top1; i++)
    {
        printf("%d ", st1[i]);
    }
    printf("\n");
}

int main()
{
    int choice;

    while (1)
    {
        printf("\n--- Queue Using Stack ---\n");
        printf("1. Insert (enqueue)\n");
        printf("2. Delete (dequeue)\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert();
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
            printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
