class Solution {
  int longestOnes(List<int> nums, int k) {
    int count = 0;
    int temp = 0;
    int replica = k;
    for (var i = 0; i < nums.length; i++) {
      replica = k;
      temp = 0;
      if (nums.length - i > count) {
        for (var j = i; j < nums.length; j++) {
          if (nums[j] == 0 && replica>0) {
            temp++;
            replica--;
          } else if (nums[j] == 1) {
            temp++;
          }
         else if (replica == 0) {
            break;
          }
        }
      } else {
        break;
      }
      if (temp > count) {
        count = temp;
      }
    }
    return count;
  }
}

void main(List<String> args) {
  Solution().longestOnes([0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], 3);
}
