#include <stdio.h>
#include <stdlib.h>


struct Node
{
    int value;
    struct Node *leftChild, *rightChild;
    int height;
};

// Function to get height of a node
int getHeight(struct Node *node)
{
    if (node == NULL)
        return 0;
    return node->height;
}

// Utility function to get maximum
int max(int a, int b)
{
    return (a > b) ? a : b;
}

// Create a new node
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->value = value;
    newNode->leftChild = newNode->rightChild = NULL;
    newNode->height = 1;
    return newNode;
}

// Right rotation (LL case)
struct Node *rotateRight(struct Node *parent)
{
    struct Node *child = parent->leftChild;
    struct Node *rightSubtree = child->rightChild;

    // Perform rotation
    child->rightChild = parent;
    parent->leftChild = rightSubtree;

    // Update heights
    parent->height = max(getHeight(parent->leftChild), getHeight(parent->rightChild)) + 1;
    child->height = max(getHeight(child->leftChild), getHeight(child->rightChild)) + 1;

    return child; // new root
}

// Left rotation (RR case)
struct Node *rotateLeft(struct Node *parent)
{
    struct Node *child = parent->rightChild;
    struct Node *leftSubtree = child->leftChild;

    // Perform rotation
    child->leftChild = parent;
    parent->rightChild = leftSubtree;

    // Update heights
    parent->height = max(getHeight(parent->leftChild), getHeight(parent->rightChild)) + 1;
    child->height = max(getHeight(child->leftChild), getHeight(child->rightChild)) + 1;

    return child; // new root
}

// Get balance factor of a node
int getBalance(struct Node *node)
{
    if (node == NULL)
        return 0;
    return getHeight(node->leftChild) - getHeight(node->rightChild);
}

// Insert into AVL tree
struct Node *insert(struct Node *root, int value)
{
    // Normal BST insertion
    if (root == NULL)
        return createNode(value);

    if (value < root->value)
        root->leftChild = insert(root->leftChild, value);
    else if (value > root->value)
        root->rightChild = insert(root->rightChild, value);
    else
        return root; // duplicate not allowed

    // Update height
    root->height = 1 + max(getHeight(root->leftChild), getHeight(root->rightChild));

    // Balance factor
    int balance = getBalance(root);

    // Balance cases
    // Left Left
    if (balance > 1 && value < root->leftChild->value)
        return rotateRight(root);

    // Right Right
    if (balance < -1 && value > root->rightChild->value)
        return rotateLeft(root);

    // Left Right
    if (balance > 1 && value > root->leftChild->value)
    {
        root->leftChild = rotateLeft(root->leftChild);
        return rotateRight(root);
    }

    // Right Left
    if (balance < -1 && value < root->rightChild->value)
    {
        root->rightChild = rotateRight(root->rightChild);
        return rotateLeft(root);
    }

    return root; // unchanged
}

// Inorder traversal
void inorder(struct Node *root)
{
    if (root != NULL)
    {
        inorder(root->leftChild);
        printf("%d ", root->value);
        inorder(root->rightChild);
    }
}

int main()
{
    struct Node *root = NULL;
    int values[] = {10, 20, 30, 40, 50, 25};
    int n = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < n; i++)
        root = insert(root, values[i]);

    printf("Inorder Traversal of AVL Tree: ");
    inorder(root);
    printf("\n");

    return 0;
}
