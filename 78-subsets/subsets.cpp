class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>subset;
        createsubset(nums,0,res,subset);
        return res;
    }
    void createsubset(vector<int>&nums,int index,vector<vector<int>>&res,vector<int>&subset){
        res.push_back(subset);
        for(int i=index;i<nums.size();i++){
            subset.push_back(nums[i]);
            createsubset(nums,i+1,res,subset);
            subset.pop_back();
        }
    }
};