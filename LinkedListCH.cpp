#include<iostream>
using namespace std;
struct Cuahang{
	char tenCH[100];
	char tenchuCH[100];
	float doanhthu;
	int soluongNV;
};
typedef struct nut{
	Cuahang info;
	nut*next;
}Node;
typedef struct{
	Node*head;
	Node*tail;
}List;
void Input(Cuahang &a){
	cout<<"=====NHAP THONG TIN CUA HANG CAN THEM====="<<endl;
	cout<<"Nhap ten cua hang:	";		fflush(stdin);			gets(a.tenCH);
	cout<<"Nhap ten chu cua hang:	";	fflush(stdin);			gets(a.tenchuCH);
	cout<<"Nhap doanh thu: ";									cin>>a.doanhthu;
	cout<<"Nhap so luong NV: ";									cin>>a.soluongNV;
}
void Output(List l){
	Node *p=l.head;
	int i=0;
	while(p!=NULL){
		cout<<p->info.tenCH<<", "<<p->info.tenchuCH<<", "<<p->info.doanhthu<<","<<p->info.soluongNV<<endl;
		i++;
		p=p->next;
	}
}
//Chen dau
void push(List &l, Cuahang a){
	Node *p = new Node;
	p->info = a;
	p->next = NULL;
	if (l.head==NULL){
		l.head= l.tail =p;
	}
	else{
		p->next = l.head;
		l.head = p;
	}
}
//Chen vao vi tri thu 5
void chen5(List &l, Cuahang a){
	Node *p = l.head;
	Node *q = new Node;
	q->info = a;
	q->next = NULL;
	for (int i=0;i<3;i++)
		p=p->next;
	q->next = p->next;
	p->next = q;
}
void xoaCH(List &l){
	Node *p = l.head;
	Node *q = new Node;
	while(p!=NULL){
		p = p->next;
		if (p->next->info.doanhthu<10000000){
			p->next  = p->next->next;
			p = p->next;
			p->next = NULL;
			delete p;
			break;
		}
	}
}
main(){
	Cuahang ch1,ch2,ch3,ch4,ch5;
	List l;
	l.head = l.tail=NULL;
	Input(ch1);
	Input(ch2);
	Input(ch3);
	Input(ch4);
	Input(ch5);
	push(l, ch5);
	push(l, ch4);
	push(l, ch3);
	push(l, ch2);
	push(l, ch1);
	Output(l);
	Cuahang ch6;
	Input(ch6);
	chen5(l, ch6);
	Output(l);
	xoaCH(l);
	Output(l);
}
