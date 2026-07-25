class Solution {
public:
    int maxProduct(int n) {
        int frst = 0, sec = 0;
        while(n){
            int dig = n % 10;
            if(dig> frst){
                sec = frst;
                frst = dig;
            }
            else if(dig > sec){
                sec= dig;
            }
            n = n / 10;
        }
        return frst * sec;
    }
};