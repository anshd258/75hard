#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;
        int i = a.length() - 1;
        int j = b.length() - 1;

        while (i >= 0 || j >= 0 || carry > 0) {
            int val1 = 0, val2 = 0, sum = 0;
            if (i >= 0) {
                val1 = a[i--] - '0';
            }
            if (j >= 0) {
                val2 = b[j--] - '0';
            }
            sum = val1 + val2 + carry;

            if (sum >= 2) {
                carry = 1;
                sum -= 2;
            } else {
                carry = 0;
            }
            ans += to_string(sum);
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};

int main() {
    Solution solution;
    string a = "1100";
    string b = "1011";

    string result = solution.addBinary(a, b);
    cout << "Binary sum: " << result << endl;

    return 0;
}
