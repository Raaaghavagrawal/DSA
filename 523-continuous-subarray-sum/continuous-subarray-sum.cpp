class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int prefsum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            prefsum+=nums[i];
            prefsum%=k;
            if(prefsum==0 && i) return true;
            if(mp.find(prefsum) != mp.end()){
                if(i-mp[prefsum]>1) return true;
            }
            else mp[prefsum]=i;
        }
        return false;
    }
};