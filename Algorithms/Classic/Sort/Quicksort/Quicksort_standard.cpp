#include <bits/stdc++.h> 
using namespace std;

void quick_sort(vector<int>& v, int l, int r)
{
  if(l + 1 >= r) return;
  int left = l, right = r - 1, pivot = v[left];
  while(left < right)
  {
    // if the input array has same element then need to include the equal situation
    // if we choose first element as pivot then we start from the right side judgement
    while(left < right && v[right] >= pivot)
    {
      --right;
    }
    v[left] = v[right];
    while(left < right && pivot >= v[left])
    {
      ++left;
    } 
    v[right] = v[left];
  }
  v[left] = pivot;
  quick_sort(v, l, left);
  quick_sort(v, left + 1, r);
}

int main() {
  vector<int> v = {9, 3, 4, 5, 2, 4, 6, 2, 1, 0};
  // vector<int> v = {9, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int n = v.size();
	quick_sort(v, 0, n);
  for(auto it = v.begin(); it != v.end(); it++)
  {
    cout << *it << " ";
  }

  return 0;
}
