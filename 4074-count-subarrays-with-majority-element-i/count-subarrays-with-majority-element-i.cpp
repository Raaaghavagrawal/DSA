class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        const int n=nums.size();
        int res=0;
        for(int i=0;i<n;i++){
            int count=0+(nums[i]==target);
            if(count) res++;
            for(int j=i+1;j<n;j++){
                count+=nums[j]==target;
                if(count > ((j-i+1)/2)) res++;
            }
        }
        return res;
    }
};