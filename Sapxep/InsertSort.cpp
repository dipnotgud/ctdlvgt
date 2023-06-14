#include<iostream>
using namespace std;
//Sap xep chen
void insertSort(int a[], int n){
	int index, value;
	for(int i=1;i<n;i++){
		index = i;
		value = a[i];
		while (index>0&&a[index-1]>value){
			a[index] = a[index-1];
			index--;
		}
		a[index] = value;
	}
}
/*Mo ta giai thuat
5	2	3	8			
2	5	3	8						i=1
2	3	5	8						i=2
2	3	5	8						i=3
*/
int main(){
	int n,*a;
	cout<<"Nhap n:";		cin>>n;
	a = new int[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";	cin>>a[i];
	}
	insertSort(a, n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
