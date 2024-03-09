#include <bits/stdc++.h>

using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int i=0 , j= height.size() -1;
        while(i<j){
                int area = 0;
          if(height[j] <= height[i]){
           area = (j - i) * (height.at(j));
        }else{
             area = (j - i) *( height.at(i));
        }
        if (area > maxarea) {
          maxarea = area;
        }

        if(height[i] < height[j]){
            i++;
        }else{
            j--;
        }
       }
   
      
     
    return maxarea;
       
    }
};

int main(){
     int x[]= {1,2};
    vector<int> input(x, x + sizeof x / sizeof x[0]);
  bool result =  Solution().maxArea(input);
  cout<<result;
}