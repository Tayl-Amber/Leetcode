class Solution {
public:
    int countSetBits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int sumIndicesWithKSetBits(const std::vector<int>& nums, int k) {
    int sum = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (countSetBits(i) == k) { 
            sum += nums[i];
        }
    }
    return sum;
    }
};
