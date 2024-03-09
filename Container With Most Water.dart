class Solution {
  int maxArea(List<int> height) {
    int maxarea = 0;

    for (int i = 0; i < height.length - 1; i++) {
      for (int j = height.length - 1; j > i; j--) {
        int area = 0;
         if(height[j] <= height[i]){
           area = (j - i) * height[j];
        }else{
             area = (j - i) * height[i];
        }
        if (area > maxarea) {
          maxarea = area;
        }
      }
    }
    return maxarea;
  }
}

void main(List<String> args) {
  Solution().maxArea([1,2]);
}
