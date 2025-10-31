class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        int currSum = 0, maxLen = 0;
        unordered_map<int, int> mp;
        mp[0] = -1;
        for (int i = 0; i < n; i++) {
            currSum += (nums[i] == 1) ? 1 : -1;
            if (mp.find(currSum) != mp.end()) {
                maxLen = max(maxLen, i - mp[currSum]);
            } else {
                mp[currSum] = i;
            }
        }
        return maxLen;
    }
};