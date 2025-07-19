#include <iostream>
using namespace std;

class Test
{
    struct Data
    {
        int arr[100];
        int size;
    } data;

public:
    void inputArray()
    {
        cout << "Enter number of elements: ";
        cin >> data.size;
        cout << "Enter the elements:\n";
        for (int i = 0; i < data.size; i++)
        {
            cin >> data.arr[i];
        }
    }

    void displayArray()
    {
        cout << "Array elements: ";
        for (int i = 0; i < data.size; i++)
        {
            cout << data.arr[i] << " ";
        }
        cout << endl;
    }

    void sortArray()
    {
        for (int i = 0; i < data.size - 1; i++)
        {
            for (int j = 0; j < data.size - i - 1; j++)
            {
                if (data.arr[j] > data.arr[j + 1])
                {
                    int temp = data.arr[j];
                    data.arr[j] = data.arr[j + 1];
                    data.arr[j + 1] = temp;
                }
            }
        }
        cout << "Array sorted successfully.\n";
    }

    int factorial(int n)
    {
        if (n <= 1)
            return 1;
        else
            return n * factorial(n - 1);
    }
};

int main()
{
    Test obj;

    obj.inputArray();
    obj.displayArray();

    obj.sortArray();
    obj.displayArray();

    int num;
    cout << "Enter a number to find factorial: ";
    cin >> num;
    cout << "Factorial of " << num << " is " << obj.factorial(num) << endl;

    return 0;
}
