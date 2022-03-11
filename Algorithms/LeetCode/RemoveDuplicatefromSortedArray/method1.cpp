// time O(N)  space O(1)
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
  public:
  int removeDuplicates(vector<int>& nums)
  {
    int index = 0;
    if(nums.empty()) return 0;
    for(int i = 0; i < nums.size(); i++)
    {
      if(nums[i] == nums[i + 1])
      {
        nums[++index] == nums[i + 1];
      }
    }
    return index + 1;
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