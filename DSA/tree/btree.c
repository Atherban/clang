#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Binary Tree Node
struct btree
{
    struct btree *left;
    int value;
    struct btree *right;
};

// Root pointer
struct btree *root = NULL;

// Create new node
struct btree *create(int val)
{
    struct btree *new_node = (struct btree *)malloc(sizeof(struct btree));
    new_node->value = val;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Traversals
void inOrder(struct btree *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf("%d ", root->value);
        inOrder(root->right);
    }
}
void preOrder(struct btree *root)
{
    if (root != NULL)
    {
        printf("%d ", root->value);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct btree *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->value);
    }
}

void inorderToArray(struct btree *root, int arr[], int *idx)
{
    if (root != NULL)
    {
        inorderToArray(root->left, arr, idx);
        arr[(*idx)++] = root->value;
        inorderToArray(root->right, arr, idx);
    }
}

int *sortedTreeInorder(struct btree *root, int *size)
{
    *size = countNodes(root);
    if (*size == 0)
        return NULL;

    int *arr = (int *)malloc((*size) * sizeof(int));
    int idx = 0;
    inorderToArray(root, arr, &idx);
    return arr; // Already sorted if tree is BST
}

// Build tree from level order array (-1 means NULL)
struct btree *buildTree(int arr[], int n)
{
    if (n == 0)
        return NULL;

    struct btree **nodes = (struct btree **)malloc(n * sizeof(struct btree *));
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
            nodes[i] = NULL;
        else
            nodes[i] = create(arr[i]);
    }

    for (int i = 0, j = 1; j < n; i++)
    {
        if (nodes[i] != NULL)
        {
            if (j < n)
                nodes[i]->left = nodes[j++];
            if (j < n)
                nodes[i]->right = nodes[j++];
        }
    }
    struct btree *treeRoot = nodes[0];
    free(nodes);
    return treeRoot;
}

// Search element in tree
bool searchTree(struct btree *root, int key)
{
    if (root == NULL)
        return false;
    if (root->value == key)
        return true;
    return searchTree(root->left, key) || searchTree(root->right, key);
}

int main()
{
    int a[] = {10, 20, 30, 60, 70, 80, 24, -1, 90, 100, 55, -1, 75, 200, -1};
    int n = sizeof(a) / sizeof(a[0]);

    root = buildTree(a, n);

    printf("------------------------");
    printf("\nIn Order : ");
    inOrder(root);
    printf("\n");

    printf("------------------------");
    printf("\nPre Order : ");
    preOrder(root);
    printf("\n");

    printf("------------------------");
    printf("\nPost Order : ");
    postOrder(root);
    printf("\n");

    printf("------------------------");
    printf("\nSorted Tree Values : ");
    sortedTreeInorder(root, n);

    printf("------------------------\n");
    int key = 75;
    if (searchTree(root, key))
        printf("Element %d found in the tree.\n", key);
    else
        printf("Element %d not found in the tree.\n", key);
    printf("------------------------\n");
    return 0;
}
