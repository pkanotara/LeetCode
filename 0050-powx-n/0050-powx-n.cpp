class Solution {
public:
    double myPow(double x, int n) {
        double ans = pow(x, n);
        return round(ans * 100000) / 100000;
    }
};