// WAP to convert Infix expression to prefix using Stack
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char ch)
{
    if (top == MAX - 1)
        return;
    stack[++top] = ch;
}

char pop()
{
    if (top == -1)
        return '\0';
    return stack[top--];
}

char topElem()
{
    if (top == -1)
        return '\0';
    return stack[top];
}

int precedence(char ch)
{
    if (ch == '*' || ch == '/')
        return 2;
    if (ch == '+' || ch == '-')
        return 1;
    return 0;
}

int isOperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}

int isOperand(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return 1;
    return 0;
}

void reverse(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char tmp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = tmp;
    }
}

void swapBrackets(char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '(')
            str[i] = ')';
        else if (str[i] == ')')
            str[i] = '(';
    }
}

void infixToPrefix(char *infix, char *prefix)
{
    char postfix[MAX] = "";
    int k = 0;

    reverse(infix);
    swapBrackets(infix);

    for (int i = 0; infix[i]; i++)
    {
        char ch = infix[i];

        if (isOperand(ch))
        {
            postfix[k++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            while (top != -1 && topElem() != '(')
                postfix[k++] = pop();
            pop(); // discard '('
        }
        else if (isOperator(ch))
        {
            while (top != -1 && precedence(topElem()) >= precedence(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }

    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';
    reverse(postfix);
    strcpy(prefix, postfix);
}

int main()
{
    char infix[MAX], prefix[MAX];

    printf("Enter an infix expression: ");
    fgets(infix, MAX, stdin);

    // Remove trailing newline
    size_t len = strlen(infix);
    if (infix[len - 1] == '\n')
        infix[len - 1] = '\0';

    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n", prefix);

    return 0;
}
