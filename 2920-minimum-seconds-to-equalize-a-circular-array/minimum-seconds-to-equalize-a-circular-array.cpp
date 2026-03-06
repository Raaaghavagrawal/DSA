class Solution {
public:
    int minimumSeconds(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,vector<int>>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]].push_back(i);
        }
        int ans=1e7;
        for(auto &[num,pos] : mpp){
            pos.push_back(pos[0]+n);
            int time=0;
            for(int i=1;i<pos.size();i++){
                int diff=pos[i]-pos[i-1];
                int currtime=diff/2;
                time=max(currtime,time);
            }
            ans=min(time,ans);
        }
        return ans;
    }
};