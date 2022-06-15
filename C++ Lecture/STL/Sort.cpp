#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector<vector<int>> v = {{1,2}, {2,3}, {1,3}, {3,4}};
  sort(v.begin(), v.end(), [](vector<int> a, vector<int>b) {
    return a[1] < b[1];
  });
  sort(v.begin(), v.end(), [](vector<int> a, vector<int>b) {
    return a[0] < b[0];
  });
  for(int i=0; i < v.size(); i++)
  {
    cout << v[i][0] << ' ' << v[i][1] << endl;
  }
  return 0;
}