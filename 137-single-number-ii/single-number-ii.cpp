class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            int freq=it.second;
            if(freq==1) return it.first;
        }
        return -1;
    }
};