/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    if (nums.size() == 0 )
      return 0;
    int size = nums.size();
    int pivot = 0, counter = 0;

    while (counter < size) {
        if(pivot + 1 < size) {
            if (nums[pivot] == nums[pivot + 1]) {
                for(int i = pivot + 1; i < size; ++i)
                {
                    nums[i - 1] = nums[i];
                }
                --pivot;
            }
        }
        ++pivot;
        ++counter;
    }
    if(pivot == counter)
    {
        return size;
    }
    else
    {
        return pivot + 1;
    }

  }
};

// function removeDuplicates(nums)
// {
//     let pivot = 0;
//     let counter = 0;
//     while (counter < nums.length) {
//         if (nums[pivot] == nums[pivot + 1]) {
//             for(let i = pivot + 1; i < nums.length; ++i)
//             {
//                 nums[i - 1] = nums[i];
//             }
//             --pivot;
//         }
//         ++pivot;
//         ++counter;
//         console.log(nums, pivot);
//     }
// }
// arr = [1, 1, 2, 3, 3, 4, 4, 4, 4, 5, 6];
// removeDuplicates(arr);
// @lc code=end
