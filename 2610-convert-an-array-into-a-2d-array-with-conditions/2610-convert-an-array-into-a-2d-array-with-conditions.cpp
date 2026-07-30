class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_map<int,int> cnt;

        for (int x : nums) {
            if (cnt[x] == res.size())
                res.push_back({});
            res[cnt[x]].push_back(x);
            cnt[x]++;
        }

        return res;
    }
};