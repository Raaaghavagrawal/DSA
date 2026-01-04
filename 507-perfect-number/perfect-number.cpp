class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num%2==1 || num<=0) return false;
        int sum=3;
        for(int i=3;i<=num/2;i++){
            if(num%i==0) sum+=i;
        }
        return sum==num;
    }
};