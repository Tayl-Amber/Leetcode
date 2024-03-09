class Solution {
public:
    bool isValid(string s) {
         vector<char> charVector;

    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            charVector.push_back(c);
        } else {
            if (charVector.empty()) {
                return false;  
            }

            char openBracket = charVector.back();
            charVector.pop_back();

            if ((c == ')' && openBracket != '(') ||
                (c == '}' && openBracket != '{') ||
              (c == ']' && openBracket != '[')) {
                return false;
            }
        }
    }

    return charVector.empty();
    }
};
