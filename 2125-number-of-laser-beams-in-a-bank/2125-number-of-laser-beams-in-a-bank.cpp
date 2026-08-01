class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res = 0, prev = 0;
        for (auto row : bank) {
            int temp = count(row.begin(), row.end(), '1');
            if (temp){
                res += prev * temp;
                prev = temp;
            } 
        }

        return res;
    }
};