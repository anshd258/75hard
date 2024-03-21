class Solution {
  List<int> intersection(List<int> nums1, List<int> nums2) {
    List<int> result = [];
    nums1.sort();
    nums2.sort();
    int i = 0, j = 0;
    while (i < nums1.length && j < nums2.length) {
      if (nums1[i] == nums2[j]) {
        result.add(nums1[i]);
        i++;
        j++;
      } else if (nums1[i] > nums2[j]) {
        j++;
      } else {
        i++;
      }
    }

    return result.toSet().toList();
  }
}

void main(List<String> args) {
  Solution().intersection([1, 2, 2, 1], [2, 2]);
}
