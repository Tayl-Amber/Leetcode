class Solution {
public:
    int totalMoney(int n) {
      int r = (n/7);

        int ans = r * 28;

        for (int i = 0, sum = 0; i < r; ++i) {

            ans += sum;

            sum += 7;

        }

        for (int i = 0, money = r+1; i < n%7; ++i) {

            ans += money;

            money++;

        }

        return ans;
    }
};
