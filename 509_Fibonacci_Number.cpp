class Solution {
public:
    int fib(int n) {
     if (n <= 1)

        return n;

    int prev = 0, current = 1, next;

    for (int i = 2; i <= n; ++i) {

        next = prev + current;

        prev = current;

        current = next;

    }

    return current;
    }
};
