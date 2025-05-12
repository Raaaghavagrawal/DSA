class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int stream=1,i=0;
        while(stream<=n && i<target.size()){
            ans.push_back("Push");
            if(stream==target[i]) i++;
            else ans.push_back("Pop");
            stream++;
        }
        return ans;
    }
};