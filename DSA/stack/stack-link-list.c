// Implementation of Stack using Linked List
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *top = NULL;

void push(int value)
{
    struct stack *new_node = (struct stack *)malloc(sizeof(struct stack));
    new_node->data = value;
    new_node->next = top;
    top = new_node;
    printf("%d pushed to stack.\n", value);
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack is Empty!\n");
        return;
    }

    struct stack *temp = top;
    printf("%d popped from stack.\n", top->data);
    top = top->next;
    free(temp);
}

void display()
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return;
    }

    struct stack *temp = top;
    printf("Stack: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
