/*
leetcode 1572
Check if array is sorted and rotated
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            if (nums[i - 1] > nums[i]) {
                count++;
            }
        }
        if (nums[n - 1] > nums[0]) {
            count++;
        }
        return count <= 1;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2}; // Example input, you can modify as needed
    bool result = solution.check(nums);
    if (result) {
        cout << "The array satisfies the condition." << endl;
    } else {
        cout << "The array doesn't satisfy the condition." << endl;
    }
    return 0;
}
