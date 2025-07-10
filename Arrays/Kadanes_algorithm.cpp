// Kadane's Algorithm: Maximum Subarray Sum

#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int maxSum = nums[0];
    int curr = nums[0];
    for (int i = 1; i < nums.size(); i++) {
        curr = max(nums[i], curr + nums[i]);
        maxSum = max(maxSum, curr);
    }
    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Max Subarray Sum: " << maxSubArray(nums) << endl;
    return 0;
}
