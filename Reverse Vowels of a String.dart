import 'dart:core';

class Solution {
  String reverseVowels(String s) {
    int i = 0;
    int j = s.length - 1;

    for (; i < s.length; i++) {
      if (i > j) {
        break;
      }
      String ch = s[i];
      if (ch == 'a' ||
          ch == 'e' ||
          ch == 'i' ||
          ch == 'o' ||
          ch == 'u' ||
          ch == 'A' ||
          ch == 'E' ||
          ch == 'I' ||
          ch == 'O' ||
          ch == 'U') {
        for (; j >= 0;) {
          if (i > j) {
            break;
          }
          String sh = s[j];
          if (sh == 'a' ||
              sh == 'e' ||
              sh == 'i' ||
              sh == 'o' ||
              sh == 'u' ||
              sh == 'A' ||
              sh == 'E' ||
              sh == 'I' ||
              sh == 'O' ||
              sh == 'U') {
            s = s.replaceRange(i, i + 1, s[j]);
            s = s.replaceRange(j, j + 1, ch);
            j = j - 1;
            break;
          } else {
            j = j - 1;
            continue;
          }
        }
      }
    }
    return s;
  }
}

void main(List<String> args) {
  String s = Solution().reverseVowels("ai");
  print(s);
}
