class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> freq;
        string v = "aeiou";

        for (char c : s) {
                freq[c]++;
        }

        int maxv = 0, maxc = 0;

        for (auto &it : freq) {
            if (v.find(it.first) != string::npos)
                maxv = max(maxv, it.second);
            else
                maxc = max(maxc, it.second);
        }

        return maxv + maxc;
    }
};
