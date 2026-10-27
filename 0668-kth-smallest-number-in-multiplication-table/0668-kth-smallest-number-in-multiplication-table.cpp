class Solution {
public:
    int func(int m, int n, int guess) {
        int row = m;
        int col = n;
        int count = 0;
        for (int i = 1; i <= row; i++) {
            count += min(col, guess / i);
        }
        return count;
    }
    int findKthNumber(int m, int n, int k) {
        int low = 1;
        int high = m * n;
        int res = -1;

        while (low <= high) {
            int guess = (low + high) / 2;
            int ans = func(m, n, guess);

            if (ans < k) low = guess + 1;
            else {
                res = guess;
                high = guess - 1;
            }
        }
        return res;
    }
};
