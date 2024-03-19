class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int c = 0;
        int p = 0;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] < 0) {
                p -= abs(nums[i]);
                if (p == 0) {
                    c++;
                }
            } else {
                p += nums[i];
                if (p == 0) {
                    c++;
                }
            }
        }

        return c;
    }
};
