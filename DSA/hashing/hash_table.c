// Hash Table implementation in C with Linear and Left Probing
#include <stdio.h>
#define TABLE_SIZE 10
#define EMPTY -1

int hash_table[TABLE_SIZE];

void init_table()
{
    for (int i = 0; i < TABLE_SIZE; i++)
        hash_table[i] = EMPTY;
}

int hash(int key)
{
    return key % TABLE_SIZE;
}

// Linear Probing
void insert_linear(int key)
{
    int idx = hash(key);
    int start = idx;
    while (hash_table[idx] != EMPTY)
    {
        idx = (idx + 1) % TABLE_SIZE;
        if (idx == start)
        {
            printf("Hash table is full!\n");
            return;
        }
    }
    hash_table[idx] = key;
}

// Left Probing (backward/left search)
void insert_left(int key)
{
    int idx = hash(key);
    int start = idx;
    while (hash_table[idx] != EMPTY)
    {
        idx = (idx - 1 + TABLE_SIZE) % TABLE_SIZE;
        if (idx == start)
        {
            printf("Hash table is full!\n");
            return;
        }
    }
    hash_table[idx] = key;
}

void display()
{
    printf("Hash Table: ");
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (hash_table[i] != EMPTY)
            printf("%d ", hash_table[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

int main()
{
    init_table();
    // Example usage
    insert_linear(23);
    insert_linear(43);
    insert_linear(13);
    insert_linear(27);
    printf("After linear probing inserts:\n");
    display();

    init_table();
    insert_left(23);
    insert_left(43);
    insert_left(13);
    insert_left(27);
    printf("After left probing inserts:\n");
    display();
    return 0;
}
