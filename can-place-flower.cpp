#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
          int i =0;
        int size  = flowerbed.size();
     while( i< size ){

                if(flowerbed[i]==0 && ((i == 0 || flowerbed[i-1] == 0) &&(i == size - 1 || flowerbed[i+1] == 0))) {
                    i++;
                    n--;
                if(n <=0){
                    return true;
                }
                }
      
          i++;
      
        }
        return n <=0;
        
        
    }
};

int main(){
    int x[]= {1,0,0,0,0,1};
    vector<int> flowerbed(x, x + sizeof x / sizeof x[0]);
  bool result =  Solution().canPlaceFlowers(flowerbed, 2);
  cout<<result;
}