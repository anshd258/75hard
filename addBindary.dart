class Solution {
  String addBinary(String a, String b) {
    String ans = '';
    int carry = 0;
    int i = a.length - 1;
    int j = b.length - 1;

    while (i >= 0 || j >= 0 || carry >0 ) {
        int val1 = 0, val2 = 0 , sum = 0;
      if (i >= 0){

       val1 =  int.parse(a[i--]) ;
      }
      if (j >= 0){

        val2 = int.parse(b[j--]) ;
      }
    sum = val1+val2+carry;
        
      if(sum>=2){
        carry = 1;
        sum = sum-2;
      }else{
        carry=0;
      }
     ans+=sum.toString();
    }
    return reverseString(ans);
  }

  String reverseString(String input) {
  String reversed = '';
  for (int i = input.length - 1; i >= 0; i--) {
    reversed += input[i];
  }
  return reversed;
}
}
void main(List<String> args) {
  Solution().addBinary("11", "1");
}
