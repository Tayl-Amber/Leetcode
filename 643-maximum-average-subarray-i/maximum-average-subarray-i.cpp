class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
    for (int i = 0; i < k; ++i) {
        sum += nums[i];
    }

    double max_avg = static_cast<double>(sum) / k;

    for (int i = k; i < nums.size(); ++i) {
        sum += nums[i] - nums[i - k];
        max_avg = std::max(max_avg, static_cast<double>(sum) / k);
    }

    return max_avg;
    }
};