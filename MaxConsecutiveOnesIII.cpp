#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
     int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]==0){
                k--;
            }
            if(k<0){
                if(nums[i]==0){
                    k++;
                }
                i++;
            }
            j++;
        }
        return j-i;
    }
};

int main(){
       int x[] = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    vector<int> sample(x, x + sizeof x / sizeof x[0]) ;
     auto result = Solution().longestOnes(sample, 2);
      
        cout << result;
   
}