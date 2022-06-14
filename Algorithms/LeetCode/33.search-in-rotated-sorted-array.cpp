/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;
        while(start <= end)
        {
            int mid = (start + end) / 2;
            if(nums[mid] == target)
            {
                return true;
            }
            if(nums[start] == nums[mid])
            {
                ++start;
            }
            else if(nums[mid] <= nums[end])
            {
                // 如果是右区间内，则对右区间继续二分查找
                if(target > nums[mid] && target <= nums[end])
                {
                    start = mid + 1;
                }
                // 反之则搜索另一半
                else
                { 
                    end = mid - 1;
                }
            }
            else
            {
                if(target > nums[start] && target <= nums[mid])
                {
                    end = mid - 1;
                }
                else
                {
                    start = mid + 1;
                }
            }
        }
        return false;
    }
};
// @lc code=end

