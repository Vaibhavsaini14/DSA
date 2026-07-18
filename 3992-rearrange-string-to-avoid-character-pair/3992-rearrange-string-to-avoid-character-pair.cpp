class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        string l = "" , mid = "" , r = "";
        for(char ch : s){
            if(ch == y){
                l += ch;
            }
            else if(ch == x){
                r += ch;
            }
            else mid += ch;
        }
        return l + r + mid ;     
    }
};