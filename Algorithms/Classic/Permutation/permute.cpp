#include <iostream>
#include <vector>

using namespace std;
vector<int> arr1 = { 1, 2, 3 };
vector<int> arr2 = { 4, 5, 6, 7 };
vector<int> arr3 = { 1, 2, 2, 3 };
vector<int> arr4 = { 1, 2, 3, 4, 5, 6, 7, 8, 9};

void swap(vector<int>& arr, int a, int b) {
 int temp = arr[a];
 arr[a] = arr[b];
 arr[b] = temp; 
}

vector<vector<int>> result;
int sum = 0;
void permute(vector<int>& arr, int length, int begin) {
  int end = arr.size();
  if(begin == end) {
    result.push_back(arr);
    for(int i : arr) {
      cout << i << " ";
    }
    cout << endl;
    sum += 1;
  } else {
    for(int i = begin; i < end; ++i) {
      if(arr[i] == arr[i + 1]) {
        continue;
      }
      swap(arr, begin, i);
      permute(arr, length, begin + 1);
      swap(arr, begin, i);
    } 
  }
}

int main(void) {
  permute(arr3, 4, 0);
  cout << "total results:" << sum;
}
