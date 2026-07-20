class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        int sum = 0;
        for(int i=0; i< nums.size(); i++){
            maxi = max(maxi , nums[i]);
            sum += nums[i];
        }
        int low = maxi;
        int high = sum;
        while(low <= high){
            int mid = low + (high - low) / 2;
            int count = 1;
            int curr_sum = 0;
            for(int i=0; i< nums.size(); i++){
                if(curr_sum + nums[i] <= mid){
                    curr_sum += nums[i];
                }
                else{
                    count++;
                    curr_sum = nums[i];
                }
            }
            if(count <= k) high = mid - 1;
            else low = mid + 1;
        }
        return low;
        
    }
};