#include<iostream>
using namespace std;
//Sap xep noi bot
void bulbleSort(int a[], int n){
	for(int i=n-1;i>=1;i--)
		for(int j=0;j<i;j++){
			if (a[j]>a[j+1]){
				int tg = a[j];
				a[j] = a[j+1];
				a[j+1] = tg;
			}
		}
}
/*Mo ta giai thuat
	5	4	2	3	6		
	4	5	2	3	6			i=n-1;j=0
	4	2	5	3	6			i=n-1;j=1
	...
	4	2	3	5	6			i=n-1;j=n-2
	...
	2	3	4	5	6			i=1;j=0
*/
int main(){
	int n;
	int a[100];
	cout<<"Nhap n: ";		cin>>n;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]=";	cin>>a[i];
	}
	bulbleSort(a, n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}
