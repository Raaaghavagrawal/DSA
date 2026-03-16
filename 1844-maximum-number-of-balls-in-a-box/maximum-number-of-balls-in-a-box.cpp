class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int boxes[50]={0};
        int maxcnt=0;
        for(int i=lowLimit;i<=highLimit;i++){
            int num=i;
            int digitSum=0;
            while(num>0){
                digitSum+=num%10;
                num/=10;
            }
            boxes[digitSum]++;
            if(boxes[digitSum]>maxcnt) maxcnt=boxes[digitSum];
        }
        return maxcnt;
    }
};