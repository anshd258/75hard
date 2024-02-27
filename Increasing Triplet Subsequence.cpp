#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
  int firstMin = numeric_limits<int>::max();
  int secondMin = numeric_limits<int>::max();

        for (int num : nums) {
            if (num <= firstMin) {
                firstMin = num;
            } else if (num <= secondMin) {
                secondMin = num;
            } else {
              
                return true;
            }
        }

        return false;
    }
};

int main(){
       int x[5] = {2147483646,2147483647,2147483647};
    vector<int> candies(x, x + sizeof x / sizeof x[0]) ;
     auto result = Solution().increasingTriplet(candies);
      
        cout << (result?"true":"false");
   
}