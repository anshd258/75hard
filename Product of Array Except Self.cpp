#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        unsigned int post = 1;
        unsigned int pre = 1;
        int n = nums.size();
         vector<int> result(n-1);
         result.push_back(1);
        for(int i = 0 ; i< n; i++){
            result[i] = pre;
            pre =pre*nums[i];
        }
        for(int i = n-1;i>=0;i-- ){
            result[i] = result[i]*post;
            post = post*nums[i];
        }
        return result;
    }
};

int main(){

     int x[5] = {4,2,1,1,2};
    vector<int> candies(x, x + sizeof x / sizeof x[0]) ;
     auto result = Solution().productExceptSelf(candies);
      for (int i = 0; i < result.size(); i++){
        cout << result[i];
    }

}