#include <bits/stdc++.h>

using namespace std;

bool isSubsequence(const string& s, const string& t) {
    int count = 0;
    int j = 0;

    for (int i = 0; i < s.length(); i++) {
        for (; j < t.length(); j++) {
            if (t[j] == s[i]) {
                count++;
                j++;
                break;
            }
        }
    }

    return count == s.length();
}

int main() {
  string s = "abc"; // Replace with your actual string
   string t = "ahbgdc"; // Replace with your actual string

    bool result = isSubsequence(s, t);

    if (result) {
       cout << "The string '" << s << "' is a subsequence of '" << t << "'.\n";
    } else {
        cout << "The string '" << s << "' is not a subsequence of '" << t << "'.\n";
    }

    return 0;
}