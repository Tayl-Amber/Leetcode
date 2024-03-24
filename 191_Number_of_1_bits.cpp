class Solution {
public:
    int hammingWeight(uint32_t n) {
         int x = 0;
        while(n>0) {
            x+=n%2;
            n/=2;
        }
        return x;
    }
};
