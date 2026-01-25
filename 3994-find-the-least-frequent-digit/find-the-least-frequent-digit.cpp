class Solution {
public:
    int getLeastFrequentDigit(int n) {
        unsigned char freq[10]={};
        while(n){
            ++freq[n%10];
            n/=10;
        }
        int ans=0, mini = INT_MAX;
        for(int d=0;d<10;d++){
            int cnt=freq[d];
            if(cnt && cnt < mini){
                mini=cnt;
                ans=d;
            }
        }
        return ans;
    }
};