// Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid. The string is valid if:

//         Open brackets are closed by the same type.
//         Open brackets are closed in the correct order.

// Test Cases:

// s = "()" → true
// s = "()[]{}" → true
// s = "(]" → false
// s = "([)]" → false

#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

bool isValid(string s)
{
    stack<char> st;
    unordered_map<char, char> pairs = {
        {')', '('},
        {']', '['},
        {'}', '{'}};

    for (char c : s)
    {
        if (pairs.find(c) != pairs.end())
        { // Closing bracket
            if (st.empty() || st.top() != pairs[c])
            {
                return false;
            }
            st.pop();
        }
        else
        { // Opening bracket
            st.push(c);
        }
    }
    return st.empty();
}

int main()
{
    // Test Cases
    cout << isValid("()") << endl;     // Output: 1 (true)
    cout << isValid("()[]{}") << endl; // Output: 1 (true)
    cout << isValid("(]") << endl;     // Output: 0 (false)
    cout << isValid("([)]") << endl;   // Output: 0 (false)
    return 0;
}