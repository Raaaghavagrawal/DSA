class MyCalendarThree {
public:
    map<int,int>mpp;
    MyCalendarThree() {
    }
    int book(int startTime, int endTime) {
        mpp[startTime]+=1;
        mpp[endTime]-=1;
        int curr=0;
        int maxcurr=0;
        for(auto it:mpp){
            curr+=it.second;
            maxcurr=max(maxcurr,curr);
        }
        return maxcurr;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(startTime,endTime);
 */