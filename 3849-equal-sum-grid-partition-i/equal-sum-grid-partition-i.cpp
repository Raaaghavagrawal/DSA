class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        const int m = grid.size(), n = grid[0].size();
        long long total = 0;
        for(int i = 0; i < m; ++i) {
            for(int j = 0; j < n; ++j) total += grid[i][j];
        }
        long long currRow = 0;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j) currRow += grid[i][j];
            if(currRow * 2 == total) return true;
        }
        long long currCol = 0;
        for(int j = 0; j < n; ++j){
            for(int i = 0; i < m; ++i) currCol += grid[i][j];
            if(currCol * 2 == total) return true;
        }
        return false;
    }
};