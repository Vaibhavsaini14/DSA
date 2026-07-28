class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> res(n);
        for(int i = 0; i < n; i++)
            for(int x : matrix[i]){
                res[i] += x;
            }
        return res;
    }
};