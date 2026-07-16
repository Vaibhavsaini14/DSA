class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // By Sorting
        // sort(begin(nums) , end(nums) , greater<int>());
        // return nums[k-1];

        // T.C --> O(n * logk)
        priority_queue<int , vector<int> , greater<int>> pq; // min_heap
        for(int &num : nums){
            pq.push(num);
            if(pq.size() > k){
                pq.pop();
            }
        }
        return pq.top();
    }
};