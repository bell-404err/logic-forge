#include "two-sum.h"
#include <iostream>
#include <vector>

using std::cout;
using std::vector;

// Two Sum — Task Description:
// Given an array of integers nums and an integer target,
// return the indices of the two numbers such that they add up to target.
//  - Each input has exactly one valid solution.
//  - You cannot use the same element twice.
//  - The answer can be returned in any order.
// ---------------------------------------------------------------------------------------------------------------------
// Example 1
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: nums[0] + nums[1] == 9
//
// Example 2
// Input: nums = [3,2,4], target = 6
// Output: [1,2]
//
// Example 3
// Input: nums = [3,3], target = 6
// Output: [0,1]
// Constraints
// 2 <= nums.length <= 10^4
// -10^9 <= nums[i] <= 10^9
// -10^9 <= target <= 10^9
// Exactly one valid answer exists.
// ---------------------------------------------------------------------------------------------------------------------
// Follow-up
// Can you design an algorithm with a time complexity better than O(n²)?

// How to improve solution: Hash-map -> ???

vector<int> twoSum(const vector<int>& numbers, const int target) {
  vector<int> result;

  for (int i = 0; i < numbers.size(); i++) {
    for (int j = i + 1; j < numbers.size(); j++) {
      if (numbers[i] + numbers[j] == target) {
        result.push_back(i);
        result.push_back(j);
      }
    }
  }

  return result;
}

// 01.12.2025
