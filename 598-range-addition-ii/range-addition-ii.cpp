class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        if(ops.size()==0) return n*m;
        int max_row=INT_MAX;
        int max_col=INT_MAX;
        for(auto it:ops){
            max_row=min(it[0],max_row);
            max_col=min(it[1],max_col);
        }
        return max_row*max_col;
    }
};