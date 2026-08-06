class Solution {
public:

    int product(int num){
        int p = 1;
        while(num){
            p *= num % 10;
            num = num / 10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        while(product(n) % t !=  0){ 
            n++;
        }
        return n;
    }
};