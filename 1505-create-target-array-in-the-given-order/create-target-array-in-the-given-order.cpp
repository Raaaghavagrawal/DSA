class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            vector<int>::iterator pos=res.begin()+index[i];
            res.insert(pos,nums[i]);
        }
        return res;
    }
};