class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int , int > mp;
        for(int i = 0; i < matches.size(); i++){
            int loser = matches[i][1];
            mp[loser]++;
        }
        vector<int> neverlost;
        vector<int> lostonce;
        for(int i = 0; i < matches.size(); i++){
            int loser = matches[i][1];
            int winner = matches[i][0];

            if(mp.find(winner) == mp.end()){
                neverlost.push_back(winner);
                mp[winner] = 2;
            }
            if(mp[loser] == 1){
                lostonce.push_back(loser);
            }
        }
        sort(begin(neverlost) , end(neverlost));
        sort(begin(lostonce) , end(lostonce));
        return {neverlost , lostonce};
    }
};