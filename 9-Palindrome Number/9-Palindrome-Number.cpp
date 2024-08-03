class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0) {
            return false;
        }

        int originalNumber = x;
        int ans = 0;

        while (x > 0) {
            int lastdigit = x % 10;

            if (ans > (INT_MAX - lastdigit) / 10) {
             
                return false;
            }

            ans = ans * 10 + lastdigit;
            x = x / 10;
        }

        // Check if the reversed number matches the original number
        return ans == originalNumber;
    }
};
