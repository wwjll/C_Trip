/*
 * @lc app=leetcode id=69 lang=cpp
 *
 * [69] Sqrt(x)
 */

// @lc code=start
class Solution {
public:
    int mySqrt(int x) {
        // Dichotomy
        if(x == 0) return x;
        int l = 1, r = x, mid, sqrt;
        while(l <= r)
        {
            mid = l + (r - l) / 2;
            sqrt = x / mid;
            if(mid == sqrt)
            {
                return mid;
            }
            else if(mid > sqrt)
            {
                r = mid - 1;    
            }
            else
            {
                l = mid + 1;
            }
        }
        return r;
        // Newton Method
        // long t = x;
        // while (t * t > x) {
        //     t = (t + x / t) / 2;
        // }
        // return t;
    }
};
// @lc code=end

