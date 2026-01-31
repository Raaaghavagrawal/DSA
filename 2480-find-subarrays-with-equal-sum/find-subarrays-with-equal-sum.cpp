class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n-1;i++){
            mpp[nums[i]+nums[i+1]]++;
            if(mpp[nums[i]+nums[i+1]]==2) return true;
        }
        return false;
    }
};