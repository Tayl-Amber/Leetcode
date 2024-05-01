class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }

    string reverseVowels(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (!isVowel(s[i])) {
                i++;
                continue;
            }
            if (!isVowel(s[j])) {
                j--;
                continue;
            }
            swap(s[i++], s[j--]);
        }
        return s;
    }
};