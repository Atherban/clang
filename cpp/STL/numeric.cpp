#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

void sumArray(const vector<int> &v)
{
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << "Sum: " << sum << endl;
}

int main()
{
    vector<int> v = {11, 2, 2, 2, 2, 30, 4, 15, 69};

    cout << "Original Vector:\n";
    for (int x : v)
        cout << x << " ";
    cout << endl;
    cout << endl;

    // Sum
    sumArray(v);
    cout << endl;

    // Find a value
    int searchValue = 4;
    cout << "Finding value " << searchValue << ": ";
    auto it = find(v.begin(), v.end(), searchValue);
    if (it != v.end())
        cout << "Element found.\n";
    else
        cout << "Element not found.\n";
    cout << endl;

    // Count occurrences
    int countValue = 2;
    int occurrences = count(v.begin(), v.end(), countValue);
    cout << "Occurrences of " << countValue << ": " << occurrences << endl;
    cout << endl;

    // Max and Min
    int maxVal = *max_element(v.begin(), v.end());
    int minVal = *min_element(v.begin(), v.end());
    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;
    cout << endl;

    // Replace value
    int oldVal = 2, newVal = 99;
    replace(v.begin(), v.end(), oldVal, newVal);
    cout << "Vector after replacing " << oldVal << " with " << newVal << ":\n";
    for (int x : v)
        cout << x << " ";
    cout << endl;
    cout << endl;

    // Sorting
    sort(v.begin(), v.end());
    cout << "Sorted Vector:\n";
    for (int x : v)
        cout << x << " ";
    cout << endl;
    cout << endl;

    // binary search
    bool isPresent = binary_search(v.begin(), v.end(), 99);
    if (isPresent)
    {
        cout << "Element Found " << endl;
    }
    else
    {
        cout << "Element Not Found" << endl;
    }

    return 0;
}
