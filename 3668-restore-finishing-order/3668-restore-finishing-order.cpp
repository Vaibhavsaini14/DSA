class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        unordered_set<int> st(friends.begin(), friends.end());
        vector<int> res;
        for(int n : order)
            if(st.count(n)){
                res.push_back(n);
            }    
        return res;
    }
};