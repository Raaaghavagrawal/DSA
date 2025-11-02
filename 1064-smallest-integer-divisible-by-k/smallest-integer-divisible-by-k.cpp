class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int n=1,r;
        unordered_set<int>st;
        for(int i=1;;i++){
            r=n%k;
            if(r==0) return i;
            if(st.count(r)) return -1;
            st.insert(r);
            n=r*10+1;
        }
        return -1;
    }
};