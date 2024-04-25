class Solution {
public:
    int numberOfSpecialChars(string word) {
        int count = 0;
        
        for(char i = 'a'; i <= 'z'; ++i) {
            if(word.find(i) != string::npos && word.find((char)toupper(i)) != string::npos) {
                ++count;
            }
        }

        return count;
    }
};