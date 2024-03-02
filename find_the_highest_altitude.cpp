#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
       vector<int> nums;
        int count = 0;
        nums.push_back(count);

        for (int i = 0; i < gain.size(); i++) {
            count += gain[i];
            nums.push_back(count);
        }

        int maxAltitude = -99999999;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] >= maxAltitude) {
                maxAltitude = nums[i];
            }
        }

        return maxAltitude;
    }
};

int main(){
  int x[5] = {-5,1,5,0,-7};
    vector<int> gains(x, x + sizeof x / sizeof x[0]) ;

auto result = Solution().largestAltitude(gains);
cout<<result;
}