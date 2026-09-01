#include <climits>

class Solution {
public:
    int reverse(int x) {
        long reversed = 0;
        int temp = x;
        while (temp != 0) {
            int lastDigit = temp % 10;
            reversed = reversed * 10 + lastDigit;
            temp /= 10;
        }
        if (reversed > INT_MAX || reversed < INT_MIN) {
            return 0;
        }
        return reversed;
    } 
};
