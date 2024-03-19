class Solution {
  int climbStairs(int n) {
        if (n <= 1) {
            return 1;
        }
    List<int> arr =List.filled(n+1, 0);
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2; i <= n ; i++ ){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[n];
  }
}

void main(List<String> args) {
  print(Solution().climbStairs(6));

}