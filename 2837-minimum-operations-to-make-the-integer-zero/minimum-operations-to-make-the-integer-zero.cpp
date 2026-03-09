class Solution {
public:
    int countsetbits(long long n){
        int count=0;
        while(n>0){
            n&=(n-1);
            count++;
        }
        return count;
    }
    int makeTheIntegerZero(int num1, int num2) {
        for(int k=1;k<=61;k++){
            long long target=(long long) num1-(long long)k*num2;
            if(countsetbits(target)<=k && k<=target) return k;
        }
        return -1;
    }
};