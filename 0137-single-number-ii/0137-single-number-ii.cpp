class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // map<int , int> mp;
        // for(int i = 0 ; i< nums.size(); i++){
        //     mp[nums[i]]++;
        // }
        // for(auto it : mp){
        //     if(it.second == 1)
        //     return it.first;   
        // }
        // return 0;
        
        sort(nums.begin() , nums.end());
        for(int i = 1 ; i < nums.size(); i = i + 3){
            if(nums[i] != nums[i - 1]) {
                return nums[i - 1];
            }    
        }
        return nums[nums.size() - 1];
    }
};