class Solution {
public:
    bool isPowerOfFour(int n) {
         return (n > 0) && ((n & (n - 1)) == 0) && ((int)log2(n) % 2 == 0);
    }
};