class Solution {
  List<int> productExceptSelf(List<int> nums) {
    int post = 1;
    int pre = 1;
    int n = nums.length;
    List<int> result = List.filled(n, 1);
    for (int i = 0; i < n; i++) {
      result[i] = pre;
      pre = pre * nums[i];
    }
    for (int i = n - 1; i >= 0; i--) {
      result[i] = result[i] * post;
      post = post * nums[i];
    }
    return result;
  }
}
void main(List<String> args) {
  var result = Solution().productExceptSelf([4, 2, 1, 1, 2]);
  print(result);
}
