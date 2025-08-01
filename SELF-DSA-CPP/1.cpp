// Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to target. You may assume that each input has exactly one solution, and you may not use the same element twice.

// Example Test Cases:
//  Input: nums = [2, 7, 11, 15], target = 9
//  Output: [0, 1]
//  Explanation: nums[0] + nums[1] = 2 + 7 = 9.

// Input: nums = [3, 2, 4], target = 6
// Output: [1, 2]
// Explanation: nums[1] + nums[2] = 2 + 4 = 6.

// Input: nums = [3, 3], target = 6
// Output: [0, 1]
// Explanation: nums[0] + nums[1] = 3 + 3 = 6.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> numMap;
    for (int i = 0; i < nums.size(); i++)
    {
        int complement = target - nums[i];
        if (numMap.find(complement) != numMap.end())
        {
            return {numMap[complement], i};
        }
        numMap[nums[i]] = i;
    }
    return {};
}
int main()
{
    vector<int> nums1 = {2, 7, 11, 15};
    vector<int> result1 = twoSum(nums1, 9);
    cout << "Test Case 1: [" << result1[0] << ", " << result1[1] << "]" << endl;

    vector<int> nums2 = {3, 2, 4};
    vector<int> result2 = twoSum(nums2, 6);
    cout << "Test Case 2: [" << result2[0] << ", " << result2[1] << "]" << endl;

    vector<int> nums3 = {3, 3};
    vector<int> result3 = twoSum(nums3, 6);
    cout << "Test Case 3: [" << result3[0] << ", " << result3[1] << "]" << endl;

    return 0;
}