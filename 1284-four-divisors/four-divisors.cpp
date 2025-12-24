class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i:nums){
            int sum=0;
            int counter=0;
            for(int j=1;j*j<=i;j++){
                if(i%j==0){
                    sum+=j;
                    sum+=(i/j);
                    counter+=2;
                    if(j*j==i){
                        counter--;
                        sum-=j;
                    }
                    if(counter>4) break;
                }
            }
            if(counter==4) ans+=sum;
        }
        return ans;
    }
};