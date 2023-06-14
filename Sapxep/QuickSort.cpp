#include<iostream>
using namespace std;
void quickSort(int a[], int l, int r){
	int p = a[(l+r)/2];
	int i = l, j = r;
	while (i < j){
		while (a[i] < p){
			i++;
		}
		while (a[j] > p){
			j--;
		}
		if (i <= j){
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			i++;
			j--;
		}
	}
	cout<<i<<" "<<j<<endl;
	if (i < r){
		quickSort(a, i, r);
	}
	if (l < j){
		quickSort(a, l, j);
	}
}
int main(){
	int a[5] = {3, 8, 1, 5, 7};
	quickSort(a, 0, 4);
	for (int i=0;i<5;i++)
		cout<<a[i]<<" ";
	return 0;
}
