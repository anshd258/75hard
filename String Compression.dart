class Solution {
  int compress(List<String> chars) {
       String result = "";
      int n = chars.length;
     int i=0;
     int j=0;
     String? pos;
      while(i<n){
          int count = 0;
          j=i;
          pos =chars[i];
          while(j<n && pos == chars[j]){
              j++;
              count++;
          }
          result +=pos;
          if((count >1)){
              String temp = count.toString();
              for(int k = 0; k < temp.length; k++) {
                result += temp[k];
              }    
          }
          i=j;
      }
   
        chars.clear();
         for(int k = 0; k < result.length; k++) {
                chars.add(result[k]);
              }    
        
      return chars.length;
  }
}

void main(List<String> args) {
   var result = Solution().compress(["a","a","b","b","c","c","c"]);
  print(result);
}