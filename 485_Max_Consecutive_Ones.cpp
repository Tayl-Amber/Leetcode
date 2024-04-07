class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int maxCount = 0;
    int count = 0;
    
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == 0) {
            if (count > maxCount)
                maxCount = count;
            count = 0;
            continue; 
        }
        count++;
    }
    
    if (count > maxCount)
        maxCount = count; 
    
    return maxCount;
    }
};
