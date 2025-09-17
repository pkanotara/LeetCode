class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int n=a.size();
        int maxi=0;
        vector<int>v(n);
        for(int i=0;i<n-1;i++){

            v[i] = *max_element(a.begin()+i+1, a.end());
        }
        v[n-1]=-1;
        return v;

        
    }

};