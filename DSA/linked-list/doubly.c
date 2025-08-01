#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head = NULL;

struct node *create(int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->prev = NULL;
    temp->data = val;
    temp->next = NULL;
    return temp;
}

void insert_end(int val)
{
    struct node *new_node = create(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
    new_node->prev = temp;
}

void insert_at_index()
{
    int val, index;
    printf("Enter value and index to insert: ");
    scanf("%d %d", &val, &index);

    struct node *new_node = create(val);

    if (index == 0)
    {
        new_node->next = head;
        if (head != NULL)
            head->prev = new_node;
        head = new_node;
        printf("Inserted %d at index 0.\n", val);
        return;
    }

    struct node *temp = head;
    int count = 0;

    while (temp != NULL && count < index - 1)
    {
        temp = temp->next;
        count++;
    }
    new_node->next = temp->next;
    new_node->prev = temp;

    if (temp->next != NULL)
        temp->next->prev = new_node;

    temp->next = new_node;

    printf("Inserted %d at index %d.\n", val, index);
}

void display()
{
    struct node *temp = head;
    printf("Forward: ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        if (temp->next == NULL)
            break;
        temp = temp->next;
    }
    printf("NULL\n");
}

void display_reverse()
{
    if (head == NULL)
    {
        printf("Reverse: List is empty\n");
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    printf("Reverse: ");
    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->prev;
    }
    printf("NULL\n");
}

void delete_first()
{
    if (head == NULL)
    {
        printf("List is already empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;

    if (head != NULL)
        head->prev = NULL;

    free(temp);
    printf("First node deleted.\n");
}

void delete_last()
{
    if (head == NULL)
    {
        printf("List is already empty.\n");
        return;
    }

    struct node *temp = head;
    if (temp->next == NULL)
    {
        free(temp);
        head = NULL;
        printf("Last node deleted (list is now empty).\n");
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;
    free(temp);
    printf("Last node deleted.\n");
}

void reverse_list(struct node **head)
{
    struct node *tmp = NULL, *curr = *head;
    while (curr != NULL)
    {
        tmp = curr->next;
        curr->next = curr->prev;
        curr->prev = tmp;
        curr = curr->next;
    }
    tmp = head;
    while (tmp != NULL)
    {
        printf("%d <->", tmp->data);
        tmp = tmp->next;
    }
}

int main()
{
    int choice, val;

    while (1)
    {
        printf("\n---------------------\n");
        printf("1. Insert at END\n");
        printf("2. Delete from START\n");
        printf("3. Delete from END\n");
        printf("4. Display FORWARD\n");
        printf("5. Display REVERSE\n");
        printf("6. Insert at INDEX\n");
        printf("7. Reverse List\n");
        printf("8. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        printf("\n---------------------\n");

        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &val);
            insert_end(val);
            break;
        case 2:
            delete_first();
            break;
        case 3:
            delete_last();
            break;
        case 4:
            display();
            break;
        case 5:
            display_reverse();
            break;
        case 6:
            insert_at_index();
            break;
        case 7:
            reverse_list(&head);
            break;
        case 8:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
