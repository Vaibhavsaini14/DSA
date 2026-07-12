class Solution {
public:
    string removeStars(string s) {
        // Using Stack
    //     int n = s.length();
    //     stack<char> st;
    //     for(int i = 0; i< n; i++){
    //         if(s[i] == '*') st.pop();
    //         else st.push(s[i]);
    //     }
    //     string res = "";
    //     while(!st.empty()){
    //         res.push_back(st.top());
    //         st.pop();
    //     }

    //     reverse(res.begin() , res.end());
    //     return res;
        
        // Only STRING Method 
        int n = s.length();
        string res = "";
        for(int i = 0; i< n; i++){
            if(s[i] == '*') res.pop_back();
            else res.push_back(s[i]);
        }
        return res;
    }
};