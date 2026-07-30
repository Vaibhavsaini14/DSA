class Solution {
public:
    int minimumPushes(string word) {
        vector<int> map(26 , 0);
        for(char &ch : word){
            map[ch - 'a']++;
        }
        sort(begin(map) , end(map) , greater<int>());
        int res = 0;
        for(int i = 0; i<26; i++){
            int freq = map[i];
            int press = i / 8 + 1;
            res += press * freq;
        }
        return res;
    }
};