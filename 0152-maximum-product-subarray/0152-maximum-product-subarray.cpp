class Solution {
public:
    int maxProduct(vector<int>& a) {
        long long int ans=1;
        int n=a.size();
        int maxi=0;
        int maxj=0;
        int cnt1=1;
        int cnt2=1;

        if(a.size() == 1 ){
            return a[0];
        }

        for(int i=0;i<n;i++){
            cnt1*=a[i];
            if(maxi<cnt1) maxi=cnt1;
            if(cnt1==0) cnt1=1;

        }

         for(int i=n-1;i>=0;i--){
            cnt2*=a[i];
            if(maxj<cnt2) maxj=cnt2;
            if(cnt2==0) cnt2=1;
        }

        ans=max(maxi,maxj);
        return ans;
        
    }
};