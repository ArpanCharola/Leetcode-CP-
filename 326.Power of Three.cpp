class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n==0)
            return false;
        while(n!=1){
            if (n % 3 != 0)    //checking if it is divisible by number 3
                return false;  //not divisible by 3
            n=n/3;
        }
        return true;
    }
};
