class Solution {
public:
    int minSwaps(string s) {
        // stack<int> st;
        // for(char &ch : s){
        //     if(ch == '['){
        //         st.push(ch);
        //     }
        //     else if(!st.empty()){
        //         st.pop();
        //     }
        // }
        // return (st.size() + 1) / 2;
        
        // WITHOUT Stack as only size is aNS
        int size = 0;
        for(char &ch : s){
            if(ch == '['){
                size++;
            }
            else if(size > 0){
                size--;
            }
        }
        return (size + 1) / 2;
    }
};