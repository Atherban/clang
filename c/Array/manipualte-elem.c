#include <stdio.h>

// Function prototypes
void printArray(const char *message, int arr[], int size);
void leftRotate(int arr[], int size, int rotations);
void rightRotate(int arr[], int size, int rotations);
int insertElement(int arr[], int size, int position, int value);
int deleteElement(int arr[], int size, int position);

int main()
{
    // Initialize array with some values
    int arr[20] = {1, 2, 3, 4, 5};
    int currentSize = 5;
    const int maxSize = 20;

    // Print original array
    printArray("Original array:", arr, currentSize);

    // Demonstrate rotations
    leftRotate(arr, currentSize, 2);
    printArray("After left rotating twice:", arr, currentSize);

    rightRotate(arr, currentSize, 2);
    printArray("After right rotating twice:", arr, currentSize);

    // Demonstrate insertion
    currentSize = insertElement(arr, currentSize, 2, 99);
    printArray("After inserting 99 at position 2:", arr, currentSize);

    // Demonstrate deletion
    currentSize = deleteElement(arr, currentSize, 3);
    printArray("After deleting element at position 3:", arr, currentSize);

    return 0;
}

// Prints the array with a descriptive message
void printArray(const char *message, int arr[], int size)
{
    printf("%s\n[", message);
    for (int i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("]\n\n");
}

// Rotates array to the left by specified number of positions
void leftRotate(int arr[], int size, int rotations)
{
    // Normalize rotations if larger than array size
    rotations = rotations % size;

    // Temporary storage for rotated elements
    int temp[rotations];

    // Store elements that will be moved to the end
    for (int i = 0; i < rotations; i++)
    {
        temp[i] = arr[i];
    }

    // Shift remaining elements left
    for (int i = 0; i < size - rotations; i++)
    {
        arr[i] = arr[i + rotations];
    }

    // Append stored elements at the end
    for (int i = 0; i < rotations; i++)
    {
        arr[size - rotations + i] = temp[i];
    }
}

// Rotates array to the right by specified number of positions
void rightRotate(int arr[], int size, int rotations)
{
    // Normalize rotations if larger than array size
    rotations = rotations % size;

    // Temporary storage for rotated elements
    int temp[rotations];

    // Store elements that will be moved to the front
    for (int i = 0; i < rotations; i++)
    {
        temp[i] = arr[size - rotations + i];
    }

    // Shift elements right
    for (int i = size - 1; i >= rotations; i--)
    {
        arr[i] = arr[i - rotations];
    }

    // Prepend stored elements at the beginning
    for (int i = 0; i < rotations; i++)
    {
        arr[i] = temp[i];
    }
}

// Inserts an element at specified position, returns new size
int insertElement(int arr[], int size, int position, int value)
{
    // Check if position is valid
    if (position < 0 || position > size)
    {
        printf("Invalid position for insertion.\n");
        return size;
    }

    // Shift elements to make space for new element
    for (int i = size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert new element
    arr[position] = value;

    // Return new size
    return size + 1;
}

// Deletes element at specified position, returns new size
int deleteElement(int arr[], int size, int position)
{
    // Check if position is valid
    if (position < 0 || position >= size)
    {
        printf("Invalid position for deletion.\n");
        return size;
    }

    // Shift elements to fill the gap
    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    // Return new size
    return size - 1;
}