class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
           int count1 = 0, count2 = 0;
    
    for (int num : nums1) {
        if (find(nums2.begin(), nums2.end(), num) != nums2.end()) {
            count1++;
        }
    }
    
    for (int num : nums2) {
        if (find(nums1.begin(), nums1.end(), num) != nums1.end()) {
            count2++;
        }
    }
    
    return {count1, count2};
    }
};
