class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,int>freq;
        for(int num:nums) ++freq[num];
        int ans=1;
        if(freq.count(1)){
            int ones=freq[1];
            ans=max(ans,ones%2==0 ? ones-1:ones);
        }
        for(auto &[peak,_]:freq){
            if(peak==1) continue;
            int len=1;
            for(int val=peak;true;len++){
                int root=sqrt(val);
                if(root * root != val || !freq.count(root) || freq[root] < 2) break;
                val=root;
            }
            ans=max(ans,len*2-1);
        }
        return ans;
    }
};