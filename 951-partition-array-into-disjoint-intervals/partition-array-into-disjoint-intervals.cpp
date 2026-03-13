class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n=nums.size();
        int left=nums[0];
        int maxi=nums[0];
        int pos=0;
        for(int i=1;i<n;i++){
            if(nums[i]<left){
                pos=i;
                left=maxi;
            }
            else maxi=max(maxi,nums[i]);
        }
        return pos+1;
    }
};