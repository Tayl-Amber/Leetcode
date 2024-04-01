class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         std::unordered_map<int, int> freqMap;
    std::vector<int> result;

    // Count frequency of elements in nums1
    for (int num : nums1) {
        freqMap[num]++;
    }

    // Iterate through nums2 and find intersection
    for (int num : nums2) {
        if (freqMap[num] > 0) {
            result.push_back(num);
            freqMap[num]--;
        }
    }

    return result;
    }
};
