class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive=0;
        int negative=1;

        vector<int>v(nums.size());

        for(int i=0;i<nums.size();i++){
            if(nums[i] > 0){
                v[positive]=nums[i];
                positive=positive+2;
            }
            else {
                v[negative]=nums[i];
                negative = negative +2;
            }
        }
        return v;
        
    }
};