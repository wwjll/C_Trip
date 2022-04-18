
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

int main()
{
  int ia[6] = { 27,210,12,47,109,83 };
  // 指定放 int 的 vector, 使用 int 分配器
  vector<int, allocator<int>> vi(ia, ia+6);
  // 计算 大于 40 的元素个数
  cout << count_if(vi.begin(), vi.end(),
    not1(bind2nd(less<int>(), 40)));
  return 0;
}