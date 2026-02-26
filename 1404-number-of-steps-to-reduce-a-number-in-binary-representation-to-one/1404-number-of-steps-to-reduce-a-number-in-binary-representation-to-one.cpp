class Solution {
public:
    int numSteps(string s) {
        int steps = 0;
        int carry = 0;

        
        for (int i = s.size() - 1; i > 0; i--) {

            int bit = (s[i] - '0') + carry;

            if (bit == 1) {
                // Odd case → +1 
                steps += 2;
                carry = 1;
            } else {
                // Even case → just /2
                steps += 1;
            }
        }

        return steps + carry;
    }
};