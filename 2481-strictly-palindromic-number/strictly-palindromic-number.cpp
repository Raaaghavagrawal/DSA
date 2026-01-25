class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for(int k=2;k<=n-2;k++){
            vector<int>ans;
            int temp=n;
            while(temp>0){
                ans.push_back(temp%k);
                temp=temp/k;
            }
            int left=0;
            int right=ans.size()-1;
            while(left<right){
                if(ans[left]!=ans[right]) return false;
                left++;
                right--;
            }
        }
        return true;
    }
};