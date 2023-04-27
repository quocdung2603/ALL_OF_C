#include <bits/stdc++.h>
using namespace std;
int partition(int a[], int left, int right) {
	int mid = right;
	int i = left - 1, j = left;
	while(j <= right-1){
		if(a[j] < a[mid]){ 
			i++;
			swap(a[i],a[j]);
		}
		j++;
	}
	swap(a[i+1],a[mid]);
	return (i+1);
}
void quickSort(int a[], int left, int right, int n){
	
	if(left >= right) return;	
	int pi = partition(a,left,right);
	for(int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	quickSort(a,left,pi-1,n);
	quickSort(a,pi+1,right,n);
}
int main()
{
	int n; cin >> n;
	int a[n];
	for (int i=0; i<n; i++) cin >> a[i];
	quickSort(a, 0, n-1, n);
	return 0;
}