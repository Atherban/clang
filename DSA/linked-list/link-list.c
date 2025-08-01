#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *Head = NULL;

struct node *create_node(int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = NULL;
    return temp;
}

void insert_start()
{
    int value;
    printf("Enter value to insert at start: ");
    scanf("%d", &value);

    struct node *new_node = create_node(value);
    new_node->next = Head;
    Head = new_node;
}

void insert_end()
{
    int value;
    printf("Enter value to insert at end: ");
    scanf("%d", &value);
    struct node *new_node = create_node(value);

    if (Head == NULL)
    {
        Head = new_node;
        return;
    }

    struct node *temp = Head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void insert_at_index()
{
    int value, index;
    printf("Enter value and index to insert: ");
    scanf("%d %d", &value, &index);

    struct node *new_node = create_node(value);

    if (index == 0)
    {
        new_node->next = Head;
        Head = new_node;
        return;
    }

    struct node *temp = Head;
    int count = 0;

    while (temp != NULL && count < index - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
    {
        printf("Index out of bounds!\n");
        free(new_node);
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}

void delete_start()
{
    if (Head == NULL)
    {
        printf("List is empty!\n");
        return;
    }
    struct node *temp = Head;
    Head = Head->next;
    free(temp);
    printf("Deleted from start.\n");
}

void delete_end()
{
    if (Head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    if (Head->next == NULL)
    {
        free(Head);
        Head = NULL;
        printf("Deleted only node.\n");
        return;
    }

    struct node *temp = Head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    printf("Deleted from end.\n");
}

void delete_at_index()
{
    int index;
    printf("Enter index to delete: ");
    scanf("%d", &index);

    if (Head == NULL)
    {
        printf("List is empty!\n");
        return;
    }

    if (index == 0)
    {
        struct node *temp = Head;
        Head = Head->next;
        free(temp);
        printf("Deleted node at index 0.\n");
        return;
    }

    struct node *temp = Head;
    int count = 0;

    while (temp != NULL && count < index - 1)
    {
        temp = temp->next;
        count++;
    }

    if (temp == NULL || temp->next == NULL)
    {
        printf("Index out of bounds!\n");
        return;
    }

    struct node *to_delete = temp->next;
    temp->next = to_delete->next;
    free(to_delete);
    printf("Deleted node at index %d.\n", index);
}

void display()
{
    struct node *temp = Head;
    printf("Linked List: ");
    if (temp == NULL)
    {
        printf("Empty\n");
        return;
    }
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n==== MENU ====\n");
        printf("1. Insert at START\n");
        printf("2. Insert at END\n");
        printf("3. Insert at INDEX\n");
        printf("4. Delete from START\n");
        printf("5. Delete from END\n");
        printf("6. Delete from INDEX\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            insert_start();
            break;
        case 2:
            insert_end();
            break;
        case 3:
            insert_at_index();
            break;
        case 4:
            delete_start();
            break;
        case 5:
            delete_end();
            break;
        case 6:
            delete_at_index();
            break;
        case 7:
            display();
            break;
        case 8:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid Option. Try again.\n");
        }
    }
}
