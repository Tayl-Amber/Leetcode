class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
    if (n <= 1) {
        return s;
    }

    vector<vector<bool>> isPalindrome(n, vector<bool>(n, false));


    for (int i = 0; i < n; ++i) {
        isPalindrome[i][i] = true;
    }

    int start = 0; 
    int maxLength = 1;  

    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == s[i + 1]) {
            isPalindrome[i][i + 1] = true;
            start = i;
            maxLength = 2;
        }
    }

    for (int len = 3; len <= n; ++len) {
        for (int i = 0; i <= n - len; ++i) {
            int j = i + len - 1;
            if (isPalindrome[i + 1][j - 1] && s[i] == s[j]) {
                isPalindrome[i][j] = true;
                start = i;
                maxLength = len;
            }
        }
    }

    return s.substr(start, maxLength);

    }
};
