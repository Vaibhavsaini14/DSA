class Solution {
public:
    // int stones(vector<int> &piles , int i , int j){
    //     if(i > j) return 0;
    //     int take_i = piles[i] + min(stones(piles , i+2 , j) , stones(piles , i+1 , j-1));
    //     int take_j = piles[j] + min(stones(piles, i+1 , j-1), stones(piles , i , j-2));
    //     return max(take_i , take_j);
    // }

    bool stoneGame(vector<int>& piles) {
        // int n = piles.size();
        // int sum = accumulate(begin(piles) , end(piles) , 0);
        // int Al_score = stones(piles , 0 , n - 1);
        // return Al_score > sum / 2;
        return true;
    }
};