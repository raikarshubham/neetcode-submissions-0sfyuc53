class Solution {
public:
    double myPow(double x, int n) {

        long long N = n;   // avoid overflow for INT_MIN

        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double ans = 1;

        for (long long i = 0; i < N; i++) {
            ans *= x;
        }

        //  while (N > 0) {

        //     if (N % 2 == 1)
        //         ans *= x;

        //     x *= x;
        //     N /= 2;
        // }

        return ans;
    }
};