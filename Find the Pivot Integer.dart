class Solution {
  int pivotInteger(int n) {
    int i = 1;
    int j = n;
    int highersum = n;
    int lowersum = 1;

    while (i <= j) {
      if (i == j && lowersum == highersum) {
        return j;
      }
      if (lowersum <= highersum) {
        i++;
        lowersum += i;
      } else if (lowersum >= highersum) {
        j--;
        highersum += j;
      }

    }
    return -1;
  }
}

void main(List<String> args) {
  Solution().pivotInteger(8);
}
