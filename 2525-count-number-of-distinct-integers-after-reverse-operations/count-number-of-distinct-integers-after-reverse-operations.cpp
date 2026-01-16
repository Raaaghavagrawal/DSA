class Solution {
public:
    int reverse(int n){
        int temp=n;
        int rev=0;
        while(temp>0){
            rev=rev*10;
            rev=rev+temp%10;
            temp=temp/10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        for(int i=0;i<n;i++) ans.push_back(nums[i]);
        for(int i=0;i<n;i++) ans.push_back(reverse(nums[i]));
        map<int,int>freq;
        for(int x:ans) freq[x]++;
        return freq.size();
    }
};