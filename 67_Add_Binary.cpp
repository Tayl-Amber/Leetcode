class Solution {
public:
    string addBinary(string a, string b) {
        string result = "";

    int carry = 0;

    int i = a.length() - 1;

    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {

        int sum = carry;

        if (i >= 0) {

            sum += (a[i] - '0');

            i--;

        }

        if (j >= 0) {

            sum += (b[j] - '0');

            j--;

        }

        carry = sum / 2;

        sum = sum % 2;

        result = to_string(sum) + result;

    }

    return result;
    }
};
