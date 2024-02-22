#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
      vector<bool> result;
        for(auto i  = candies.begin(); i <candies.end(); i++){
            bool greatest = true;
            int  luckyKid = *i+extraCandies; 
            for(auto j = candies.begin() ;j< candies.end(); j++){
                 if(*j > luckyKid){
                     greatest = false;
                 }
            }
            result.push_back(greatest);
        }
        return result;
    }
};

int main(){
    int x[5] = {4,2,1,1,2};
    vector<int> candies(x, x + sizeof x / sizeof x[0]) ;
    auto result = Solution().kidsWithCandies(candies,1);
    for (int i = 0; i < result.size(); i++){
         if (result[i]) 
        cout << "True" << " ";
    cout<< "False "; 
    }
        
}