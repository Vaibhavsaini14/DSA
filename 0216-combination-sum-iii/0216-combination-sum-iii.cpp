class Solution {
public:
    void findComb(int ind , int sum , int n , int k , vector<vector<int>> &res , vector<int> &ds){   
        if(sum == n && k ==0){
            res.push_back(ds);
            return;
        }
        for(int i = ind; i<= 9 ; i++){
            ds.push_back(i);
            findComb(i+ 1 , sum +i , n , k -1 , res , ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> ds;
        findComb(1 , 0 , n ,k , res , ds);
        return res;
    }
};