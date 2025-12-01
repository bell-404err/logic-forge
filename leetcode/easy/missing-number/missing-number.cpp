#include "missing-number.h"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

// Missing number - Task Description:
// Given an array nums containing n distinct numbers in the range [0, n],
// return the only number in the range that is missing from the array.
//
// Example 1:
// Input: nums = [3, 0, 1]
// Output: 2
// # n = 3 → valid range is [0..3]
// # Present numbers: 0, 1, 3 → missing number is 2
//
// Example 2:
// Input: nums = [0, 1]
// Output: 2
// # n = 2 → range [0..2]
// # 2 is the only number not in nums
//
// Example 3:
// Input: nums = [9, 6, 4, 2, 3, 5, 7, 0, 1]
// Output: 8
// # n = 9 → range [0..9]
// # All numbers except 8 appear in nums
//
// Constraints:
// n == nums.length          # array contains n distinct numbers
// 1 <= n <= 10^4
// 0 <= nums[i] <= n         # all elements lie within [0, n]
// All numbers in nums are unique


// Maybe it's possible to use HashMap, but I'll use math formula
// sequence sum formula: n * (n + 1) / 2
// The missing number equals: the expected sum - the actual sum of the array

int missingNumber(const vector<int>& nums) {

  const int expectedSum = nums.size() * (nums.size() + 1) / 2;
  int realSum = 0;
  for (const int num : nums) {
    realSum += num;
  }
  return expectedSum - realSum;
}

// 01.12.2025
