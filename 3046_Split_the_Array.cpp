class Solution {
public:
    bool isPossibleToSplit(vector<int>& nums) {
    std::unordered_map<int, int> count;

    for (int num : nums) {
        count[num]++;
      
        if (count[num] > 2) {
            return false;
        }
    }

    if (count.size() < nums.size() / 2) {
        return false;
    }

   
    return true;
    }
};
