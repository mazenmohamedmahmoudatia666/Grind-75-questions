class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int r = numbers.size() - 1;
        int l = 0;
        while (l < r) {
            int sum = numbers[l] + numbers[r];
            if (sum == target)
                return {l + 1, r + 1}; // Return 1-based indices
            else if (sum < target)
                l++;
            else
                r--;
        }
        return {}; // Return an empty vector if no solution is found
    }
};
