#include <bits/stdc++.h> 
using namespace std;

void QuickSort(int *arr, int left, int right) {
	if(left > right) return;
	int i = left, j = right;
	int flag = arr[left];
	while(i != j) {
		while(arr[j] > flag && i < j) j--;
		while(arr[i] <= flag && i < j) i++;
		if(i<j) swap(arr[i], arr[j]);
		
	}
	
	//交换准基数与相遇值，即将中值归位
  swap(arr[left], arr[i]);
	
	//将中值左、右侧的数据分别进行排序(递归)
	QuickSort(arr, left, i-1);
	QuickSort(arr, i+1, right); 
 
} 

int main() {
	// int n; cin>>n; int array[n];
	// for(int i = 0; i < n; i++) cin>>array[i];
	int n = 10;
  int array[n] = {9, 3, 4, 5, 2, 4, 6, 2, 1, 0};

	QuickSort(array, 0, n - 1);
	
	//范围for循环打印数组
	for(int i = 0 ; i < n; i++) cout << array[i] << ' ';
	
  return 0;
}
