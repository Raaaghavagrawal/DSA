class Solution {
public:
    int maximumSetSize(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>s1,s2,u;
        int n=nums1.size()/2;
        for(auto x:nums1){
            s1.insert(x);
            u.insert(x);
        }
        for(auto x:nums2){
            s2.insert(x);
            u.insert(x);
        }
        int common=s1.size()+s2.size()-u.size();
        int n1=s1.size();
        int n2=s2.size();
        int ans=0;
        ans+=min(n,n1-common);
        ans+=min(n,n2-common);
        ans+=common;
        ans=min(ans,n*2);
        return ans;
    }
};