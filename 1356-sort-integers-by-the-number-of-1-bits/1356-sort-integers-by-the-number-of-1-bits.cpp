class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {

        vector<int> v;
        map<int,multiset<int>>m;

        for(int i = 0; i < arr.size(); i++){
            int x = decToBinary(arr[i]);
            m[x].insert(arr[i]);

        }
        
        for(auto it : m){
         cout << it.first << " -> ";

        for(auto j:it.second){
            cout<<j<<' ';
            v.push_back(j);
        }
        cout<<endl;
        }


        return v;   
    }

    int decToBinary(int n) {   
        int cnt = 0;

        while(n > 0){
            cnt += n % 2;
            n /= 2;
        }

        return cnt;
    }
};