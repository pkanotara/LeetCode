class Solution {
  public:
    vector<int> findDuplicates(vector<int>& a) {
        unordered_map<int,int>mp;
        
        for(auto i:a){
            mp[i]++;
        }
        
        vector<int>v;
        for(auto it:mp){
            if(it.second>1){
                v.push_back(it.first);
            }
            
        }
        return v;
        
    }
};