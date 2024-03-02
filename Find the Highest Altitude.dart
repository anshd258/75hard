class Solution {
  int largestAltitude(List<int> gain) {
    List<int> nums = [];
    int count = 0;
      nums.add(count);
    for (int i = 0; i < gain.length; i++) {
      count += gain[i];
      nums.add(count);
    }
    count = -99999999;
    for (int i = 0; i < nums.length; i++) {
      if (nums[i] >= count) {
        count = nums[i];
      }
    }
    return count;
  }
}

void main() {
  var result = Solution().largestAltitude([
    44,
    32,
    -9,
    52,
    23,
    -50,
    50,
    33,
    -84,
    47,
    -14,
    84,
    36,
    -62,
    37,
    81,
    -36,
    -85,
    -39,
    67,
    -63,
    64,
    -47,
    95,
    91,
    -40,
    65,
    67,
    92,
    -28,
    97,
    100,
    81
  ]);
  print(result);
}
