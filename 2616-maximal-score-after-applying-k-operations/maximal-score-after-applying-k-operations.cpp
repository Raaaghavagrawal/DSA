class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long ans=0;
        priority_queue<int>pq(nums.begin(),nums.end());
        while(k--){
            int top=pq.top();
            pq.pop();
            ans+=top;
            top=ceil(top/3.0);
            pq.push(top);
        }
        return ans;
    }
};