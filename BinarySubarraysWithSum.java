import java.util.HashMap;
import java.util.Map;

public class BinarySubarraysWithSum {
    public int numSubarraysWithSum(int[] nums, int goal) {
        int result = 0;
        int sum = 0;
        Map<Integer, Integer> order = new HashMap<>();
        order.put(0, 1);
        for (int i = 0; i < nums.length; i++) {
            sum += nums[i];
            result += order.getOrDefault(sum - goal, 0);
            order.put(sum, order.getOrDefault(sum, 0) + 1);
        }
        return result;
    }

    public static void main(String[] args) {
        BinarySubarraysWithSum solution = new BinarySubarraysWithSum();
        int[] nums = {1, 0, 1, 0, 1}; // Example input array
        int goal = 2; // Example goal
        int result = solution.numSubarraysWithSum(nums, goal);
        System.out.println("Number of subarrays with sum equal to goal: " + result);
    }
}