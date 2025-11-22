class Solution {
public:
    int minimumOperations(vector<int>& n) {
        if(n.size()<=0)
        return false;
        int cnt=0;

        for(int i=0; i<n.size(); i++){
            if(n[i]%3 == 0) continue;
            if(n[i]%3 == 1 || n[i]%3 == 2){
                cnt++;
            }
            //  if(n[i]%3 == 2){
            //     cnt++;
            // }
        }
        return cnt;
        
    }
};