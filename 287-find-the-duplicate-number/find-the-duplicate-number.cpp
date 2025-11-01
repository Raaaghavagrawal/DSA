class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int duplicate=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                duplicate=nums[i];
                break;
            }
        }
        return duplicate;
    }
};