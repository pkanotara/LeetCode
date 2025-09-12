void trim(string& s) {
    
    s.erase(s.begin(), find_if(s.begin(), s.end(), [](unsigned char ch) {
        return !isspace(ch);
    }));

    
    s.erase(find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
        return !isspace(ch);
    }).base(), s.end());
}


class Solution {
public:
    int lengthOfLastWord(string s) {
        trim(s);
        int cnt=0;
        int i=s.size()-1;
        while(i>=0 && s[i]!=' '){
            cnt++;
            i--;
        }
        return cnt;
        
    }
};