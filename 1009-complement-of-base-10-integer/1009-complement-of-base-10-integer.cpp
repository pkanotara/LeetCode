
class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int res = 0;
        long long power = 1;
        while(n > 0){
            if(n % 2 == 0) res += power;
            power *= 2;
            n /= 2;
        }
        return res;
    }
};