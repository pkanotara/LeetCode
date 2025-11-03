class Solution {
public:
    int minCost(string s, vector<int>& t) {
        int n = s.size();
        int ans = 0;
        int prev = 0;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[prev]) {
                if (t[i] < t[prev]) {
                    ans += t[i];
                } else {
                    ans += t[prev];
                    prev = i; 
                }
            } else {
                prev = i;
            }
        }
        return ans;
    }
};
