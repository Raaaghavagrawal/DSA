class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size()/4;
        map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            mp[arr[i]]++;
            if(mp[arr[i]]>n) return arr[i];
        }
        return -1;
    }
};