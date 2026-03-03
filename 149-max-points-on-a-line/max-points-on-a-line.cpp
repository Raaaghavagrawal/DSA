class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        if(n==1) return 1;
        int maxans=2;
        for(int i=0;i<n-1;i++){
            map<double,int>mpp;
            for(int j=0;j<n;j++){
                if(i==j) continue;
                int x1=points[i][0];
                int y1=points[i][1];
                int x2=points[j][0];
                int y2=points[j][1];
                double tan=atan2((y2-y1),(x2-x1));
                mpp[tan]++;
                maxans=max(maxans,mpp[tan]+1);
            }
        }
        return maxans;
    }
};