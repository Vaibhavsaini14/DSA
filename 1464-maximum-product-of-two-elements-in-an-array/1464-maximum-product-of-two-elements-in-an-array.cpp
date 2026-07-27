class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int frst = 0, sec = 0;
        for(int n : nums) {
            if(n > frst) {
                sec = frst;
                frst = n;
            }
            else if(n > sec) {
                sec = n;
            }
        }

        return (frst - 1) * (sec - 1);
    }
};