class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums, k) - atmost(nums, k - 1);
    }
    int atmost(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>freq(n+1,0);
        int left=0,result=0,distinct=0;
        for(int right=0;right<n;right++){
            if(freq[nums[right]]==0) distinct++;
            freq[nums[right]]++;
            while(distinct>k){
                freq[nums[left]]--;
                if(freq[nums[left]]==0) distinct--;
                left++;
            }
            result+=(right-left+1);
        }
        return result;
    }
};