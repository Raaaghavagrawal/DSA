class Solution {
public:
    int hammingDistance(int x, int y) {
        int dist=0;
        int val=x^y;
        while(val){
            ++dist;
            val&=val-1;
        }
        return dist;
    }
};