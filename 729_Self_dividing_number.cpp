class Solution {
public:
    bool isSelf(int n){
        int original = n; // Store original value of n
        while (n > 0){
            int num = n % 10;
            
            if (num == 0 || original % num != 0)
                return false;
            
            n /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for (int i = left; i <= right; ++i) {
            if (isSelf(i))
                res.push_back(i);
        }
        return res;
    }
};
