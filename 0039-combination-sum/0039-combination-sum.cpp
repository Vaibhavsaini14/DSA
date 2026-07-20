class Solution {
public:
    void findComb(int ind , int target , vector<int> &arr , vector<vector<int>> &res , vector<int> &ds){
        if(ind == arr.size()){
            if(target == 0){
                res.push_back(ds);
            }
            return;
        }
        if(arr[ind] <= target){
            ds.push_back(arr[ind]);
            findComb(ind , target -arr[ind] , arr , res , ds);
            ds.pop_back();
        }
        findComb(ind + 1 , target , arr , res , ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ds;
        findComb(0 , target , candidates , res , ds);
        return res;
    }
};