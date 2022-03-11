// time O(N)  space O(1)
#include <vector>
#include <iostream>
#include <algorithm.h> 
using namespace std;

class Solution
{
  public:
  int removeDuplicates(vector<int>& nums)
  {
    return distance(nums.begin(), unique(nums.begin(), nums.end()));
  }
};


// Test
int main()
{
  vector<int> nums = { 1,1,2 };
  Solution s;
  int length = s.removeDuplicates(nums);
  cout << "length " << length << endl;
  for(auto it = nums.begin(); it != nums.end(); it++)
  {
    cout << *it << " ";
  }
}