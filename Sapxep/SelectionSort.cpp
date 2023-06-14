#include<iostream>
using namespace std;
//Giai thuat sap xep chon
void selectionSort(int a[], int n){
	int indexMin;
	for(int i=0;i<n-1;i++){
		indexMin = i;
		for(int j=i+1;j<n;j++){
			if(a[indexMin]>a[j]){
				indexMin = j;
			}
		}
		if (i!=indexMin){
			int temp = a[i];
			a[i] = a[indexMin];
			a[indexMin] = temp;
		}
	}
}
/*Mo ta giai thuat
						3	2	5	4
i=0;indexMin=1			3	2	5	4	
*/
int main(){
	int n,*a;
	cout<<"Nhap n:";		cin>>n;
	a = new int[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";	cin>>a[i];
	}
	selectionSort(a, n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}
