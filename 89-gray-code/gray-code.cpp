class Solution {
public:
    void helper(vector<int>&res, int n){
        if(n==1){
            res.push_back(0);
            res.push_back(1);
            return;
        }
        helper(res,n-1);
        int i=res.size()-1;
        while(i>=0){
            int val=res[i] | 1<<(n-1);
            res.push_back(val);
            i--;
        }
    }
    vector<int> grayCode(int n) {
        vector<int>res;
        helper(res,n);
        return res;
    }
};