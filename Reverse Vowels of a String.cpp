#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    string reverseVowels(string s) {
        int i= 0  ;
        int j = s.length() -1;

        for( ; i < s.length(); i++){
              if(i>j){
            break;
        }
          char  ch = s[i];
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){

                  for(  ; j >=0 ;j-- ){
                    if(i>j){
                    break;
                 }
               char sh = s[j];
         
                 if(sh == 'a' || sh == 'e' || sh == 'i' || sh == 'o' || sh == 'u' ||
        sh == 'A' || sh == 'E' || sh == 'I' || sh == 'O' || sh == 'U'){
                         swap(s[i], s[j]);
                     
                        break;
                 } 
                 else{
                  
                     continue;
                 }
       

            }
        }

      
          
        }
        return s;
    }
    
};

int main(){
    string s = Solution().reverseVowels("ai");
    cout<<s;
}