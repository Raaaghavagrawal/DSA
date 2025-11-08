class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        vector<int>t=arr;
        sort(t.begin(),t.end());
        int ans=0;
        map<int,int>mp1;
        map<int,int>mp2;
        for(int i=0;i<arr.size();i++){
            mp1[arr[i]]++;
            mp2[t[i]]++;
            if(mp1==mp2){
                ans++;
                mp1.clear();
                mp2.clear();
            }
        }
        return ans;
    }
};