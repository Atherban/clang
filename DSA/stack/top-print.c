// WAP to print the top element of the stack
//  Stack Implementation
#include <stdio.h>
#include <stdlib.h>
int stack[10];
int n;
int top = -1;
void push_elem()
{
    if (top == n - 1)
    {
        printf("Overflow");
    }
    else
    {
        int data;
        printf("Enter data :\n");
        scanf("%d", &data);
        top++;
        stack[top] = data;
    }
}

void pop_elem()
{
    if (top == -1)
    {
        printf("No Element To POP\n");
    }
    else
    {
        int data = stack[top];
        top--;
    }
}
void display()
{
    printf("[ ");
    for (int i = 0; i != top + 1; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("]");
}
void display_top()
{
    printf("[ ");
    for (int i = 0; i < n; i++)
    {
        if (i == top)
        {
            printf("Stack Top : %d", stack[i]);
        }
    }
    printf("]");
}
int main()
{
    int ch;
    printf("Enter the size of Stack : \n");
    scanf("%d", &n);
    while (1)
    {
        printf("\n----------------------");
        printf("\nEnter Choice\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Display TOP element\n");
        printf("5.Exit\n");
        printf("----------------------\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push_elem();
            break;

        case 2:
            pop_elem();
            break;
        case 3:
            display();
            break;
        case 4:
            display_top();
            break;
        case 5:
            printf("Exiting...");
            exit(0);
            break;

        default:
            printf("Invalid Choice");
            break;
        }
    }
    return 0;
}