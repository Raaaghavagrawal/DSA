class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        int a=0;
        for(int i=1;i<weight.size();i++){
            if(weight[i]<weight[i-1]){
                a++;
                i++;
            }
        }
        return a;
    }
};