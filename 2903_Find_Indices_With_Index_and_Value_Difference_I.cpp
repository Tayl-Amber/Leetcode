class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        int n = nums.size();
        for(int i=0; i<n; i++){
            for(int j=i+indexDifference; j<n; j++){
                if(abs(i-j)>=indexDifference && abs(nums.at(i) - nums.at(j)) >= valueDifference){
                    return {i,j};
                }
            }
        }
        return {-1, -1};
    }
};
