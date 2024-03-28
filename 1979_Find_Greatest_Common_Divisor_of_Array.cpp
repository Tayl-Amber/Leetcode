class Solution {
public:
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(const std::vector<int>& nums) {
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int num : nums) {
        smallest = std::min(smallest, num);
        largest = std::max(largest, num);
    }
    return gcd(smallest, largest);
    }
};
