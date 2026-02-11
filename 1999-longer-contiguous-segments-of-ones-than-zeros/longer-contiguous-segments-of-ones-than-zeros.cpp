class Solution {
public:
    bool checkZeroOnes(string s) {
        int ones=0,zeros=0;
        int count0=0,count1=0;
        for(char val:s){
            if(val=='0'){
                count0++;
                ones=max(ones,count1);
                count1=0;
            }
            else{
                zeros=max(count0,zeros);
                count1++;
                count0=0;
            }
        }
        ones=max(ones,count1);
        zeros=max(zeros,count0);
        return ones>zeros;
    }
};