class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {
        int size=colors.size();
        int start=0,end=1;
        int bad=0;
        int res=0;
        while(start<size){
            if(colors[end%size] == colors[(end-1)%size]) bad++;
            if(end-start+1 == k){
                if(bad==0) res++;
                start++;
                if(colors[start%size]==colors[(start-1) % size]) bad--;
            }
            end++;
        }
        return res;
    }
};