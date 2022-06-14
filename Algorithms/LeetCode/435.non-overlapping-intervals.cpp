/*
 * @lc app=leetcode id=435 lang=cpp
 *
 * [435] Non-overlapping Intervals
 */
#include <iostraem>
using namespace std;
// @lc code=start
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int total = 0;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](vector<int>& a, vector<int>& b) {
            return a[1] < b[1];
        });
        int prev = intervals[0][1];
        for (int i = 1; i < n; ++i) {
            if (intervals[i][0] < prev) {
                ++total;
                // choose one item to skip by comparing end, when next one has samll end skip to this one
                if(intervals[i][1] < prev) prev = intervals[i][1];
            } else {
                prev = intervals[i][1];
            } 
        }
        return total;
    }
};
// @lc code=end

