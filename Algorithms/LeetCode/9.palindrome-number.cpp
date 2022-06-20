/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        unsigned int r = 0;
        int temp = x;
        if(x < 0)
            return false;
        while(temp != 0)
        {
            int ld = temp % 10;
            r = r * 10 + ld;
            temp = temp / 10;
        }
        return r == x;

    }
};
// @lc code=end

