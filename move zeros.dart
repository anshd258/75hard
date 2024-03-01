class Solution {
  void moveZeroes(List<int> nums) {
    List<int> zeros =[];
   zeros =  nums.where((e)=>e==0).toList();
   nums.removeWhere((e)=>e==0);
   nums.addAll(zeros);
  }
}

void main(List<String> args) {
 Solution sol = Solution();
  List<int> nums = [0, 1, 0, 3, 12]; 


  sol.moveZeroes(nums);


  print("Modified list: $nums");
}