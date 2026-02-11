class Solution {
public:
    int calDays(string s,vector<int>&pref){
        int a=stoi(s.substr(0,2));
        int b=stoi(s.substr(3));
        if(a==1) return b;
        return pref[a-2]+b;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int>months={31,28,31,30,31,30,31,31,30,31,30,31};
        vector<int>pref(12);
        pref[0]=months[0];
        for(int i=1;i<12;i++){
            pref[i]=pref[i-1]+months[i];
        }
        int a=calDays(arriveAlice,pref);
        int b=calDays(leaveAlice,pref);
        int c=calDays(arriveBob,pref);
        int d=calDays(leaveBob,pref);
        int ans=min(b,d)-max(a,c)+1;
        return ans<0 ? 0:ans; 
    }
};