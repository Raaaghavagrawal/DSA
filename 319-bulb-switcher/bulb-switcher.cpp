class Solution {
public:
    int bulbSwitch(int n) {
        int i=1;
        int answer=0;
        while(i*i <= n){
            answer++;
            i++;
        }
        return answer;
    }
};