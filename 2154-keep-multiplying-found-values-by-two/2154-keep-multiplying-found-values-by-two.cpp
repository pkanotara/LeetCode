class Solution {
public:
    int findFinalValue(vector<int>& n, int o) {
        int cnt=0;

        for(int i=0;i<n.size();i++){
            if(n[i] == o) {
                o=o*2;
                i=-1;
            }
        }
        return o;

        
    }
};