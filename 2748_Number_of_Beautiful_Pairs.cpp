class Solution {
public:
    bool coprime(int a, int b){
    a = to_string(a)[0] - '0', b = b % 10 ; // get first digit
    return __gcd(a, b)==1;
}
    int countBeautifulPairs(vector<int>& nums) {
        int n=nums.size(), ans = 0;
        for(int i=0; i<n; ++i){
            for(int j=i+1; j<n; ++j){
                if(coprime(nums[i], nums[j])){
                    ++ans;
                }
            }
        }
        return ans;
        
    }
};
