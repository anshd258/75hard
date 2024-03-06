#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());
        vector<vector<int>> ans(2);
        for(auto num : set1) {
            if(set2.contains(num) == false) ans[0].push_back(num);
        }
        for(auto num : set2) {
            if(set1.contains(num) == false) ans[1].push_back(num);
        }
        return ans;
    }
};

int main(){

}