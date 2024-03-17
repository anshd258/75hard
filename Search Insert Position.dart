class Solution {
  int searchInsert(List<int> nums, int target) {
      int result = 0;
    for (int i = 0; i < nums.length; ++i) {
      if (i == 0 && target <= nums[i]) {
        result = i;
      } else if (i == nums.length - 1 && target >= nums[i]) {
        if(target == nums[i]){
             result = i;
        }else{

        result = i+1;
        }
      } else if ((i != 0 || i == nums.length - 1) &&
          nums[i - 1] < target &&
          nums[i] >= target) {
        result = i;
      }
    }
    return result;
  }
}
void main(List<String> args) {
  Solution().searchInsert([1,3,5,6], 7);
}
