class Solution {
public:
    int characterReplacement(string s, int k) {
       int n = s.size();
       int l = 0 , r = 0 , maxlen = 0 , maxf = 0; 
       int hash[26] = {0};
       while(r < n){
        hash[s[r]- 'A']++;
        maxf = max(maxf , hash[s[r] - 'A']);
        int len = r-l+1;
        if(len - maxf > k){
            hash[s[l] - 'A']--;
            l++;
            len = r -l+1;
        }
        if(len - maxf <= k){
            maxlen = max(maxlen , len);
            r++;
        }
       }
        return maxlen;
    }
};