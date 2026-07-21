class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(char c : letters){
            if(c > target) return c; // char bada hai toh usse return krdo
        }    
        return letters[0]; // as arr sorted increasing order so 1st sbse paas wala bda hoga
    }
};