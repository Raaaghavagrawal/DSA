class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int cnt=0;
        vector<int>diff(nums.size()-1);
        for(int i=0;i<nums.size()-1;i++){
            diff[i]=(nums[i+1]-nums[i]>0 ? 1:nums[i+1]-nums[i]<0?-1:0);
        }
        int i=0;
        while(i<diff.size() && diff[i]==0) i++;
        int cur=diff[i];
        i++;
        while(i<diff.size()){
            if(diff[i]==0) i++;
            else if(diff[i]!= cur){
                cnt++;
                cur=diff[i];
                i++;
            }
            else i++;
        }
        return cnt;
    }
};