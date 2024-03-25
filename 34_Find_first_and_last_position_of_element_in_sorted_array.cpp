class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) {
            return vector<int>{-1,-1};
        }else if(nums.size() == 1) {
            return (nums[0]==target)? vector<int>{0,0} : vector<int>{-1,-1};
        }
        return binarySearch(nums, 0, nums.size()-1, target);
        
    }
    vector<int> binarySearch(vector<int>& arr, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == x) {

            int i = m;
            while(i >= l && arr[i] == x) {
                --i;
            }
                // res.push_back(i + 1); 
            int j = m;
            while(j <= r && arr[j] == x) {
                ++j;
            }
                // res.push_back(i - 1); 
            return vector<int>{i+1, j-1};

        }
 
        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;
 
        // If x is smaller, ignore right half
        else
            r = m - 1;
    }
 
    // If we reach here, then element was not present
    
    return vector<int>{-1, -1};
}
};
