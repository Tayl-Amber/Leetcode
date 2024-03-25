class Solution {
public:
  int distinctCount(vector<int>& nums, int start, int end) {
    const int MAX_VAL = 10000; 
    int count[MAX_VAL + 1] = {0};
    int distinct = 0;
    for (int i = start; i <= end; ++i) {
        if (count[nums[i]] == 0) {
            distinct++;
        }
        count[nums[i]]++;
    }
    return distinct;
}

int sumCounts(vector<int>& nums) {
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int distinct = distinctCount(nums, i, j);
            sum += distinct * distinct;
        }
    }
    return sum;
        
    }
};
