//  Check validity of Paranthesis using Stack
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = ch;
}

char pop()
{
    if (top == -1)
        return '\0';
    return stack[top--];
}

int isMatching(char open, char close)
{
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

int isValidParentheses(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '{' || ch == '[')
        {
            push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']')
        {
            char open = pop();
            if (!isMatching(open, ch))
                return 0;
        }
    }

    return (top == -1);
}

int main()
{
    char str[MAX];

    printf("Enter a string with parentheses: ");
    fgets(str, MAX, stdin);

    if (isValidParentheses(str))
        printf("Valid Parentheses\n");
    else
        printf("Invalid Parentheses\n");

    return 0;
}
