class WordFilter {
    unordered_map<string,int>data;
public:
    WordFilter(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            string const& word=words[i];
            int const n = word.size();
            for(int k=1;k<=n;k++){
                string key = word.substr(0,k);
                key+='.';
                for(int j=1;j<=n;j++){
                    key.resize(k+1);
                    key.append(word,n-j,j);
                    data[key]=i;
                }
            }
        }
    }
    
    int f(string prefix, string suffix) {
        prefix+='.';
        prefix+=suffix;
        return data.count(prefix) ? data[prefix]:-1;
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(pref,suff);
 */