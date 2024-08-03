class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0, r = heights.size() - 1;
        int max_water_container = 0;

        while (l < r) {
            int max_container = min(heights[l], heights[r]) * (r - l);
            max_water_container = max(max_water_container, max_container);

            if (heights[l] < heights[r])
                l++;
            else
                r--;
        }

        return max_water_container;
    }
};
