class Solution {
  int findTheDistanceValue(List<int> arr1, List<int> arr2, int d) {
    arr2.sort();
    int result =0 ;
    for(int i =0 ; i < arr1.length ; i++){
    var response = arr2.firstWhere((element) => (arr1[i] - element).abs() <= d,
          orElse: () => 0x7fffffffffffffff);
      if (response == 0x7fffffffffffffff) {
        result++;
      }
    }
    return result;
  }
}

void main() {
  Solution()
      .findTheDistanceValue([-3, 10, 2, 8, 0, 10], [-9, -1, -4, -9, -8], 9);
}
