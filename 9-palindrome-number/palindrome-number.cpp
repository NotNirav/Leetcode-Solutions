class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0) return false;
        long reversed = 0;
        int temp = n;

        while (temp != 0) {
            int lastDigit = temp % 10;
            reversed = reversed * 10 + lastDigit;
            temp /= 10;
        }
        return reversed == n;
    }
};