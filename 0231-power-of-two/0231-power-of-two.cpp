class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return false;
        }
        if(n==1){
            return 1; //n=1 then 2^0==1
        }
        if(n%2==0 && isPowerOfTwo(n/2)){ 
            return true;
        }
        else{
            return false;
        }
    }
};
