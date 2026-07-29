class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        int res = 1, len = 1;
        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]) res++;
            else res = 1;
            len = max(len, res);
        }
        return len;
    }
};