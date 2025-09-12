class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        int n=s.length(),k=p.length();
        // if(n<k) return ans;
        vector<int>ss(26,0),pp(26,0);
        for(int i=0;i<k;i++){
            ss[p[i]-'a']++;
        }
        int j=0;
        for(int i=0;i<n;i++){
            pp[s[i]-'a']++;
            if(i-j+1>k){
                pp[s[j]-'a']--;
                j++;
            }
            if(i-j+1 == k && ss==pp) ans.push_back(j);
        }
        return ans;
    }
};