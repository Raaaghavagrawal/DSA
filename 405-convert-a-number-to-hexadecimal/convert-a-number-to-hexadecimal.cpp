class Solution {
public:
    string toHex(int num) {
        unsigned int ournum=num;
        string str;
        char arr[17]="0123456789abcdef";
        do{
            str+=arr[ournum%16];
            ournum/=16;
        }while(ournum);
        return {str.rbegin(),str.rend()};
    }
};