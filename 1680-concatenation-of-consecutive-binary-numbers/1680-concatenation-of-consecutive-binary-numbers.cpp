class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9 + 7;
        long long ans = 0;

        for (int i = 1; i <= n; i++) {
            int len = log2(i) + 1;
            ans = ((ans << len) % MOD + i) % MOD;
        }

        return ans;
    }
};