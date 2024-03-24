/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
   int* ans = (int*)malloc(nums1Size * sizeof(int));
    *returnSize = nums1Size;

    for (int i = 0; i < nums1Size; i++) {
        int found = 0;
        int j;
        for (j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            ans[i] = -1;
            continue;
        }
        int nextGreater = -1;
        for (int k = j + 1; k < nums2Size; k++) {
            if (nums2[k] > nums1[i]) {
                nextGreater = nums2[k];
                break;
            }
        }
        ans[i] = nextGreater;
    }

    return ans;  
}
