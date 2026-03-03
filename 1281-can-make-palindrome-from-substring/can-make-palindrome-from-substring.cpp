class Solution {
public:
    int count(int num){
        int cnt=0;
        for(int i=0;i<31;i++){
            if(num&(1<<i)) cnt++;
        }
        return cnt;
    }
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        vector<int>masks;
        int curr=0;
        masks.push_back(0);
        for(auto x:s){
            curr^=(1<<(x-'a'));
            masks.push_back(curr);
        }
        vector<bool>res;
        for(auto x:queries){
            int new_mask=masks[x[0]]^masks[x[1]+1];
            int cnt=count(new_mask);
            res.push_back(cnt-1 <= x[2]*2);
        }
        return res;

    }
};