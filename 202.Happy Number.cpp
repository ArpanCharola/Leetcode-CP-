class Solution {
public:
    int SumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        if (n == 1)
            return true;
        
        unordered_set<int> visited;  // To detect cycles
        while (n != 1 && visited.find(n) == visited.end()) {
            visited.insert(n);
            n = SumOfSquares(n);
        }
        
        return n == 1;
    }
};
