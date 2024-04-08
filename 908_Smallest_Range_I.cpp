class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int minElement = *min_element(nums.begin(), nums.end());
        int maxElement = *max_element(nums.begin(), nums.end());
        int diff = maxElement - minElement;
        return max(0, diff - 2 * k);
    }
};
