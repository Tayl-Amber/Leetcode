class Solution {
public:
    string intToRoman(int num) {
        vector<int> values;

        vector<std::string> numerals = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

        for (int v : {
                    1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1
                }) {

            values.push_back(v);

        }
        string result = "";
        for (size_t i = 0; i < values.size(); ++i) {

            while (num >= values[i]) {

                result += numerals[i];

                num -= values[i];

            }

        }

        return result;
    }
};
