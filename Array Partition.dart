import 'dart:math';

class Solution {
  int arrayPairSum(List<int> nums) {
    int result = 0;
    nums.sort();
    for (int i = 1; i < nums.length; i += 2) {
      result += min(nums[i], nums[i - 1]);
    }
    return result;
  }
}

void main() {
  Solution().arrayPairSum([1,4,3,2]);
}
