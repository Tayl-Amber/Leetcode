class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<int> res;

        int s = 0;
        int result = 0;
        int e = numbers.size()-1;

        while(s < e) {
            result = numbers[s] + numbers[e];
            if(result == target) {
                return vector<int>{s+1, e+1};
                break;
            }else if( result > target) {
                --e;
            }else if(result < target) {
                ++s;
            }
        }
        return vector<int>{};
    }
};