class Solution {
  bool isSubsequence(String s, String t) {
    int count = 0;
    int j = 0;
    for (int i = 0; i < s.length; i++) {
      for (; j < t.length; j++) {
        if (t[j] == s[i]) {
          count++;
          j++;
          break;
        }
      }
    }
    return count == s.length;
  }
}

void main(List<String> args) {
  var resulr = Solution().isSubsequence("abc", "ahbgdc");
  resulr ? print("is subsequent") : print("is not sub sequent");
}
