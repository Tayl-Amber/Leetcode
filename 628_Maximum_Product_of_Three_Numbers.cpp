class Solution {
public:
    int maximumProduct(vector<int>& nums) {
         std::sort(nums.begin(), nums.end());

    int n = nums.size();
    int maxProduct = nums[n - 1] * nums[n - 2] * nums[n - 3];
    int possibleMaxProduct = nums[0] * nums[1] * nums[n - 1];
    return std::max(maxProduct, possibleMaxProduct);
    }
};
