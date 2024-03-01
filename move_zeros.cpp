#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i =0;
        for (int j =0;j<n;j++)
        {
            if(nums[j] != 0)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        for(int k = i ; k<n ;k++)
        {
            nums[k] = 0;
        }

    }
};

int main(){
  Solution sol;
    vector<int> nums = {0, 1, 0, 3, 12}; // Modify the input array as needed

    // Call the moveZeroes method
    sol.moveZeroes(nums);

    // Print the modified array
   cout << "Modified array: ";
    for (int num : nums) {
      cout << num << " ";
    }
  cout << endl;

    return 0;
}