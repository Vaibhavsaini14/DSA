class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    //    Brute force --> TLE
    //     int n = nums.size();
    //    vector<int> nge(n);
    //    for(int i = 0; i = n - 1; i++){
    //     for(int j = i + 1; j < i + n - 1; j++){
    //         int ind = j % n;
    //         if(nums[ind] > nums[i]) 
    //         nge[i] = nums[ind];
    //          break;
    //     }
    //    }
    //    return nge;
    int n = nums.size();
    vector<int> nge(n);
    stack<int> st;
    for(int i = 2*n - 1; i >=0; i--){ // Doubled the array hypothetically to traverse circularly
        while(!st.empty() && st.top() <= nums[i % n]){
            st.pop();
        }
        if(i < n){ // Only want nge for array elem. 
            nge[i] = st.empty() ? -1 : st.top();
        }
        st.push(nums[i % n]);
    }
      return nge;
    }
};