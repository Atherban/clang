// WAP to print the Middle Element , print min elem , max elem , sorting of stack , in stack
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = val;
}

int pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack (top to bottom): ");
    for (int i = top; i >= 0; i--)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

void print_middle()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    int mid = top / 2;
    printf("Middle element: %d\n", stack[mid]);
}

void print_min_max()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    int min = stack[0], max = stack[0];
    for (int i = 1; i <= top; i++)
    {
        if (stack[i] < min)
            min = stack[i];
        if (stack[i] > max)
            max = stack[i];
    }

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);
}

void sort_stack()
{
    int temp_stack[MAX];
    int temp_top = -1;

    while (top != -1)
    {
        int temp = pop();

        while (temp_top != -1 && temp_stack[temp_top] > temp)
        {
            push(temp_stack[temp_top--]);
        }

        temp_stack[++temp_top] = temp;
    }

    while (temp_top != -1)
    {
        push(temp_stack[temp_top--]);
    }

    printf("Stack sorted (ascending order)\n");
}

int main()
{
    int choice, val;
    while (1)
    {
        printf("\n--- MENU ---\n");
        printf("1. Push\n2. Pop\n3. Display\n4. Print Middle\n5. Print Min & Max\n6. Sort Stack\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            val = pop();
            if (val != -1)
                printf("Popped: %d\n", val);
            break;
        case 3:
            display();
            break;
        case 4:
            print_middle();
            break;
        case 5:
            print_min_max();
            break;
        case 6:
            sort_stack();
            break;
        case 7:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
