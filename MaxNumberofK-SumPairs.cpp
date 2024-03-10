#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int count = 0 ;
        int i=0,j=nums.size() - 1;
        while(i<j){
                   if((nums.at(i)+nums.at(j)) == k){
                    count++;
                i++;
                j--;
               }else if((nums.at(i)+nums.at(j)) > k){
                   j--;
               }else{
                   i++;
               }
        }
       return count;
    }
};

int main()
{
    
Solution sol =Solution();
    vector<int> nums = { 4,4,1,3,1,3,2,2,5,5,1,5,2,1,2,3,5,4};
    int k = 2;

    int result = sol.maxOperations(nums, k);
    cout << "Maximum operations: " << result << std::endl;

    return 0;
}
