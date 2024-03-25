class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int operations = 0;

    while (*min_element(nums.begin(), nums.end()) < k) {
   
        int min_elem = *min_element(nums.begin(), nums.end());
        int min_count = count(nums.begin(), nums.end(), min_elem);

       
        while (min_elem < k && min_count > 0) {
            auto it = find(nums.begin(), nums.end(), min_elem);
            nums.erase(it);
            min_count--;
            operations++;
        }
    }

    return operations;
    }
};
