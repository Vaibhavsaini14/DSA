class Solution {
public:
    int minPartitions(string n) {
        int maxm = 0;
        for(char &ch : n){
            maxm = max(maxm, ch - '0');
        }
        return maxm;
    }
};