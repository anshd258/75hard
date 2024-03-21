#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> result ;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int i=0 , j=0;
        while(i<nums1.size() && j< nums2.size()){
            if(nums1[i] == nums2[j]){
                result.insert(nums1[i]);
                i++;
                j++;
            }else if(nums1[i]>nums2[j]){
                j++;

            }else{i++;}
        }
    vector<int>res;
        for(auto i : result){res.push_back(i);}
    return res;
    }
};

int main(){
    int x[5] = {4,2,1,1,2};
    int y[6] = {2,2,3,5,1,2};
    vector<int> sample(x, x + sizeof x / sizeof x[0]) ;
    vector<int> sample2(x, x + sizeof x / sizeof x[0]) ;

    Solution().intersection(sample, sample2);
}