// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem1.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0; int r = nums.size() - 1;
        for(int i=0; i < nums.size(); i++) 
        {
            for(int j=i+1; j < nums.size(); j++) 
            {
                if(nums[j] == target - nums[i])
                {
                    return vector<int> {i, j};
                }
            }
        }
        return {};
    }
};
// @lc code=end

