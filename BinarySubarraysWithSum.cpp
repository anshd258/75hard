#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
    int numSubarraysWithSum(std::vector<int>& nums, int goal) {
        int result = 0;
        int sum = 0;
        std::unordered_map<int, int> order;
        order[0] = 1;

        for (int i = 0; i < nums.size(); ++i) {
            sum += nums[i];
            result += order[sum - goal];
            order[sum]++;
        }

        return result;
    }
};

int main() {
    Solution solution;
    std::vector<int> nums = {1, 0, 1, 0, 1}; // Example input
    int goal = 2; // Example goal
    std::cout << "Number of subarrays: " << solution.numSubarraysWithSum(nums, goal) << std::endl;
    return 0;
}