// Binary search Tree
#include <stdio.h>
#include <stdlib.h>

struct bst
{
    struct bst *left;
    int value;
    struct bst *right;
};
struct bst *root = NULL;

struct bst *create(int val)
{
    struct bst *new_node;
    new_node = (struct bst *)malloc(sizeof(struct bst));

    new_node->value = val;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

// void insert(int val)
// {
//     struct bst *parent = NULL, *curr = root, *new_node = create(val);
//     if (!root)
//     {
//         root = new_node;
//         return;
//     }
//     while (curr)
//     {
//         parent = curr;
//         if (val < curr->value)
//             curr = curr->left;
//         else if (val > curr->value)
//             curr = curr->right;
//         else
//         {
//             printf("Value already exists!\n");
//             free(new_node);
//             return;
//         }
//     }
//     if (val < parent->value)
//         parent->left = new_node;
//     else
//         parent->right = new_node;
// }

struct bst *insert(struct bst *root, int val)
{
    if (root == NULL)
        return create(val);
    if (val < root->value)
        root->left = insert(root->left, val);
    else if (val > root->value)
        root->right = insert(root->right, val);
    else
        printf("Value %d already exists!\n", val);

    return root;
}

struct bst *search(int val)
{
    struct bst *curr = root;
    while (curr)
    {
        if (val == curr->value)
            return curr;
        else if (val < curr->value)
            curr = curr->left;
        else
            curr = curr->right;
    }
    return NULL;
}

void inorder(struct bst *node)
{
    if (node)
    {
        inorder(node->left);
        printf("%d ", node->value);
        inorder(node->right);
    }
}

void preorder(struct bst *node)
{
    if (node)
    {
        printf("%d ", node->value);
        preorder(node->left);
        preorder(node->right);
    }
}

void postorder(struct bst *node)
{
    if (node)
    {
        postorder(node->left);
        postorder(node->right);
        printf("%d ", node->value);
    }
}

struct bst *find_min(struct bst *node)
{
    while (node && node->left)
        node = node->left;
    return node;
}

struct bst *delete(struct bst *node, int val)
{
    if (!node)
        return NULL;
    if (val < node->value)
        node->left = delete(node->left, val);
    else if (val > node->value)
        node->right = delete(node->right, val);
    else
    {
        if (!node->left)
        {
            struct bst *temp = node->right;
            free(node);
            return temp;
        }
        else if (!node->right)
        {
            struct bst *temp = node->left;
            free(node);
            return temp;
        }
        else
        {
            struct bst *temp = find_min(node->right);
            node->value = temp->value;
            node->right = delete(node->right, temp->value);
        }
    }
    return node;
}

int main()
{
    int choice, val;
    struct bst *found;
    while (1)
    {
        printf("\n--- BST Menu ---\n");
        printf("1. Insert\n2. Search\n3. Delete\n4. Inorder\n5. Preorder\n6. Postorder\n7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value to insert: ");
            scanf("%d", &val);
            insert(root, val);
            break;
        case 2:
            printf("Enter value to search: ");
            scanf("%d", &val);
            found = search(val);
            if (found)
                printf("Value %d found!\n", val);
            else
                printf("Value not found!\n");
            break;
        case 3:
            printf("Enter value to delete: ");
            scanf("%d", &val);
            root = delete(root, val);
            break;
        case 4:
            printf("Inorder: ");
            inorder(root);
            printf("\n");
            break;
        case 5:
            printf("Preorder: ");
            preorder(root);
            printf("\n");
            break;
        case 6:
            printf("Postorder: ");
            postorder(root);
            printf("\n");
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
    return 0;
}