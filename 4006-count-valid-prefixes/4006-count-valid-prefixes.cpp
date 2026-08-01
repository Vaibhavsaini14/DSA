class Solution {
public:
    int countValidPrefixes(string s) {
        int a = 0;
        int b = 0;
        int res = 0;
        for(char ch : s){
            if(ch == '0'){
                a++;
            } else b++;
            if(abs(a - b) <= 1) res++;
        }
        return res;
        
    }
};