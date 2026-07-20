class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0 , p = s.size()  , q = t.size();
        while(i < p && j < q){
            if(s[i] == t[j]) 
            i++;
            j++;
        }
        if(i == s.size()) 
        return true;
        else return false;
    }
};