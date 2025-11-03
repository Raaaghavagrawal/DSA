class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>result;
        vector<int>subset;
        createSubset(result,0,subset,nums);
        return result;
    }
    void createSubset(vector<vector<int>>&result,int index,vector<int>&subset,vector<int>&nums){
        result.push_back(subset);
        for(int i=index;i<nums.size();i++){
            if(i>index && nums[i]==nums[i-1]) continue;
            subset.push_back(nums[i]);
            createSubset(result,i+1,subset,nums);
            subset.pop_back();
        }
    }
};