class Solution {
public:
    int reverseNum(int num) {
        int rev = 0;
        while(num > 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }
        return rev;
    }

    bool isSameAfterReversals(int num) {
        int first = reverseNum(num);
        int second = reverseNum(first);
        
        return second == num;
    }
};