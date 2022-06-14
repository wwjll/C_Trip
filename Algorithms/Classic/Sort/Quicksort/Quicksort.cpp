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
		
	}	//���whileѭ����i=j
	
	//����׼����������ֵ��������ֵ��λ
  swap(arr[left], arr[i]);
	
	//����ֵ���Ҳ�����ݷֱ��������(�ݹ�)
	QuickSort(arr, left, i-1);
	QuickSort(arr, i+1, right); 
 
} 

int main() {
	// int n; cin>>n; int array[n];
	// for(int i = 0; i < n; i++) cin>>array[i];
	int n = 10;
  int array[n] = {9, 3, 4, 5, 2, 4, 6, 2, 1, 0};

	QuickSort(array, 0, n - 1);
	
	//��Χforѭ����ӡ����
	for(int i = 0 ; i < n; i++) cout << array[i] << ' ';
	
  return 0;
}
