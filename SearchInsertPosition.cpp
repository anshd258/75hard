#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int result = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (i == 0 && target <= nums[i]) {
                result = i;
            } else if (i == nums.size() - 1 && target >= nums[i]) {
                if (target == nums[i]) {
                    result = i;
                } else {
                    result = i + 1;
                }
            } else if ((i != 0 || i == nums.size() - 1) &&
                       nums[i - 1] < target &&
                       nums[i] >= target) {
                result = i;
            }
        }
        return result;
    }
};

int main(){

     int x[4] = {1,3,5,6};
    vector<int> sampleData(x, x + sizeof x / sizeof x[0]) ;
     auto result = Solution().searchInsert(sampleData , 7);

        cout << result;

    
}