class Solution {
  int pivotIndex(List<int> nums) {
    List<int> leftsum = [];
    List<int> rightsum = List.filled(nums.length, 0);
    int sum = 0;
    for (int i = 0; i < nums.length; i++) {
      if (i == 0) {
        leftsum.add(0);
      } else {
        sum += nums[i - 1];
        leftsum.add(sum);
      }
    }
    print(leftsum);
    sum = 0;
    for (int i = nums.length - 1; i >= 0; i--) {
      if (i == nums.length - 1) {
        rightsum[i] = 0;
      } else {
        sum += nums[i + 1];
        rightsum[i] = sum;
      }
    }
    print(rightsum);
    for (int i = 0; i < nums.length; i++) {
      if (leftsum[i] == rightsum[i]) {
        return i;
      }
    }
    return -1;
  }
}

void main(List<String> args) {
  print(Solution().pivotIndex([1, 7, 3, 6, 5, 6]));
}
