class Solution {
public:
    unordered_map<char,string>digits={
        {'1', "I"},
        {'2', "II"},
        {'3', "III"},
        {'4', "IV"},
        {'5', "V"},
        {'6', "VI"},
        {'7', "VII"},
        {'8', "VIII"},
        {'9', "IX"}
    };
    unordered_map<char, char> by_ten = {
        {'I', 'X'},
        {'V', 'L'},
        {'X', 'C'},
        {'L', 'D'},
        {'C', 'M'} 
    };
    string intToRoman(int num) {
        string res;
        for(char d:to_string(num)){
            for(char &r:res) r=by_ten[r];
            res+=digits[d];
        }
        return res;
    }
};