/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */

// @lc code=start
class Solution {
public:
  // direction[i] and direction[i + 1] can reprent the 4 directions
  vector<int> direction{-1, 0, 1, 0, -1};

public:
  // Recursion
  // int maxAreaOfIsland(vector<vector<int>>& grid) {
  //     if(grid.empty() || grid[0].empty()) return 0;
  //     int max_area = 0;
  //     for(int i = 0; i < grid.size(); i++)
  //     {
  //         for(int j = 0; j < grid[0].size(); j++)
  //         {
  //             if(grid[i][j] == 1)
  //             {
  //                 max_area = max(max_area, dfs(grid, i, j));
  //             }
  //         }
  //     }
  //     return max_area;
  // }

  // int dfs(vector<vector<int>>& grid, int r, int c)
  // {
  //     if(grid[r][c] == 0) return 0;
  //     // set the current position 0 so it does't take to calculate next loop
  //     grid[r][c] = 0;
  //     int area = 1, x, y;

  //     for(int i = 0; i < 4; i++)
  //     {
  //         x = r + direction[i];
  //         y = c + direction[i + 1];
  //         if(x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size())
  //         {
  //             area += dfs(grid, x, y);
  //         }
  //     }
  //     return area;
  // }

  // Stack
  int maxAreaOfIsland(vector<vector<int>> &grid) {
    int m = grid.size(), n = m ? grid[0].size() : 0, local_area, area = 0, x, y;
    for (int i = 0; i < m; ++i) {
      for (int j = 0; j < n; ++j) {
        if (grid[i][j]) {
          local_area = 1;
          grid[i][j] = 0;
          stack<pair<int, int>> island;
          island.push({i, j});
          while (!island.empty()) {
            auto[r, c] = island.top();
            island.pop();
            for (int k = 0; k < 4; ++k) {
              x = r + direction[k], y = c + direction[k + 1];
              if (x >= 0 && x < m && y >= 0 && y < n && grid[x][y] == 1) {
                grid[x][y] = 0;
                ++local_area;
                island.push({x, y});
              }
            }
          }
          area = max(area, local_area);
        }
      }
    }
    return area;
  }
};
// @lc code=end.
