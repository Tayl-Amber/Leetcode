class Solution {
public:
    bool isFascinating(int n) {
        std::string concatenated = std::to_string(n) + std::to_string(2 * n) + std::to_string(3 * n);
        std::sort(concatenated.begin(), concatenated.end());
        if (concatenated == "123456789") {
            return true;
        }
        return false;
    }
};
