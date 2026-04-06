class Solution {
public:
    int numPrimeArrangements(int n) {
        const long MOD=1e9+7;
        int cnt=0;
        vector<long>f(n+1,1);
        for(int i=2;i<=n;i++){
            f[i]=f[i-1]*i;
            f[i]%=MOD;
        }
        for(int p=2;p<=n;p++){
            bool isprime=true;
            for(int i=2;i*i<=p;i++){
                if(p%i==0){
                    isprime=false;
                    break;
                }
            }
            if(isprime) cnt++;
        }
        cout<<cnt<<endl;
        return (int)(f[cnt]%MOD * f[n-cnt]%MOD);
    }
};