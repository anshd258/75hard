#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    int compress(vector<char>& chars) {
        string result = "";
        int n = chars.size();
        int i = 0;
        int j = 0;
        char pos;

        while (i < n) {
            int count = 0;
            j = i;
            pos = chars[i];

            while (j < n && pos == chars[j]) {
                j++;
                count++;
            }

            result+=pos;

            if (count > 1) {
                string temp = to_string(count);
                for (char c : temp) {
                    result+=c;
                }
            }

            i = j;
        }

        chars.clear();
       for (char c : result) {
                    chars.push_back(c);
                }

        return chars.size();
    }
};

int main(){

     char x[7] = {'a','a','b','b','c','c','c'};
    vector<char> candies(x, x + sizeof x / sizeof x[0]) ;
     auto result = Solution().compress(candies);
      for (int i = 0; i < candies.size(); i++){
        cout << candies[i];
    }
    
}