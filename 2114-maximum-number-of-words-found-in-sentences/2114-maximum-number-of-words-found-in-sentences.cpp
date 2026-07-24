class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int res = 0;
        for(string s : sentences){
            int words = 1;
            for(char c : s){
                if(c == ' ') words++;
            }
            res = max(res, words);
        }

        return res;
    }
};