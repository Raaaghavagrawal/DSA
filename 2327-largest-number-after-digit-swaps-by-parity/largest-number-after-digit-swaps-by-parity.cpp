class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int> even, odd;
        vector<int> odds;
        for(int n = num; n; n /= 10){
            int digit = n % 10;
            if(digit & 1){
                odd.push(digit);
                odds.push_back(1);
            }
            else{
                even.push(digit);
                odds.push_back(0);
            }
        }
        int res = 0;
        for(int i = odds.size() - 1; i >= 0; --i){
            res *= 10;
            if(odds[i]){
                res += odd.top(); odd.pop();
            }
            else{
                res += even.top(); even.pop();
            }
        }
        return res;
    }
};