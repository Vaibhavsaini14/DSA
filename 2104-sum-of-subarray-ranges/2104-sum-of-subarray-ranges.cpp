class Solution {
public:
    vector<int> getNSL(vector<int> arr , int n){
        vector<int> res(n);
        stack<int> st;
        for(int i = 0; i < n; i++){
            if(st.empty()){
                res[i] = -1;
            } else {
                while(!st.empty() && arr[st.top()] > arr[i])
                st.pop();
                res[i] = st.empty() ? -1 : st.top();
                }
            st.push(i);
        }
        return res;
    }

    vector<int> getNSR(vector<int> arr , int n){
            vector<int> res(n);
            stack<int> st;
            for(int i = n-1 ; i >= 0; i--){
                if(st.empty()){
                    res[i] = n;
                } else {
                    while(!st.empty() && arr[st.top()] >= arr[i])
                    st.pop();
                    res[i] = st.empty() ? n : st.top();
                }
                st.push(i);
            }
            return res;
    }

    vector<int> getNGL(vector<int>& arr, int n) {
            vector<int> res(n);
            stack<int> st;

            for (int i = 0; i < n; i++) {
            while (!st.empty() && arr[st.top()] < arr[i])
                st.pop();

                res[i] = st.empty() ? -1 : st.top();
                st.push(i);
            }

        return res;
        }

    vector<int> getNGR(vector<int>& arr, int n) {
        vector<int> res(n);
        stack<int> st;

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] <= arr[i])
                st.pop();

            res[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return res;
    }


    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        vector<int> NSL = getNSL(nums, n);
        vector<int> NSR = getNSR(nums, n);
        vector<int> NGL = getNGL(nums, n);
        vector<int> NGR = getNGR(nums, n);

        long long minSum = 0;
        long long maxSum = 0;
         for (int i = 0; i < n; i++) {
            long long left = i - NSL[i];
            long long right = NSR[i] - i;
            minSum += 1LL * nums[i] * left * right;
            left = i - NGL[i];
            right = NGR[i] - i;
            maxSum += 1LL * nums[i] * left * right;
        }
        return maxSum - minSum;
    }
};