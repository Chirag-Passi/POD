/*  Palindrome LeetCode Ques 9 */

class Solution
{
public:
    bool isPalindrome(int x)
    {

        if (x < 0) // if num 0 or negative return false
            return false;

        long long reverse = 0; // long long for --> 2,147,483,648
        int temp = x;

        while (temp > 0)
        {
            reverse = reverse * 10 + temp % 10;
            temp /= 10;
        }

        if (x == reverse) // Palindrome Condition
            return true;
        else
            return false;
    }
};
/*      Time  Complexity : O(d) ; --> d = digits in the x ; 
        Space Complexity : O(1) ;   */
