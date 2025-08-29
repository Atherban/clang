/*

Null pointers = no.of nodes + 1

        10
       / \
    20   30
   / \
 40 50
*/

#include <stdio.h>
#include <stdlib.h>

struct btree
{
    struct btree *left;
    int value;
    struct btree *right;
};
struct btree *root = NULL;

struct btree *create(int val)
{
    struct btree *new_node;
    new_node = (struct btree *)malloc(sizeof(struct btree));

    new_node->value = val;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

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

int main()
{

    struct btree *n1 = create(10);
    struct btree *n2 = create(20);
    struct btree *n3 = create(30);
    struct btree *n4 = create(60);
    struct btree *n5 = create(70);
    struct btree *n6 = create(80);
    struct btree *n7 = create(24);
    struct btree *n8 = create(90);
    struct btree *n9 = create(100);
    struct btree *n10 = create(55);
    struct btree *n11 = create(75);
    struct btree *n12 = create(200);

    // node 1
    root = n1;
    n1->left = n2;
    n1->right = n3;

    // node 2
    n2->left = n4;
    n2->right = n5;

    // node 3
    n3->left = n6;
    n3->right = n7;

    // node 4
    n4->left = NULL;
    n4->right = n8;

    // node 5
    n5->left = n9;
    n5->right = n10;

    // node 6
    n6->left = NULL;
    n6->right = n11;

    // node 7
    n7->left = n12;
    n7->right = NULL;

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

    return 0;
}