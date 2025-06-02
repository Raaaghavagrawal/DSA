class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        vector<int>subset;
        createsubset(nums,0,result,subset);
        return result;
    }
    void createsubset(vector<int>&nums,int index,vector<vector<int>>&result,vector<int>&subset){
        result.push_back(subset);
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1]) continue;
            subset.push_back(nums[i]);
            createsubset(nums,i+1,result,subset);
            subset.pop_back();
        }
    }
};