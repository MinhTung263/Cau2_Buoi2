/*
C�u 2: 
X�y dung lop Mang1C c� 2 thuoc tinh: mot mang mot chi?u so nguy�n, so phan tu cua mang.
a.	X�y dung phuong thu nhap/xuat
b.	X�y dung phuong thuc t�m c�c so lon hon mot so nhap v�o tu b�n ph�m trong mang.
*/
#include <iostream>
#include <string>
using namespace std;
class Mang1C{
	public:
		void Nhap(int a[],int n){
			for(int i=0;i<n;i++){
				cout<<"Nhap phan tu a["<<i+1<<"]: ";
				cin>>a[i];
			}
		}
		void Xuat(int a[],int n){
			for(int i=0;i<n;i++){
				cout<<a[i]<<"\t";
			}
		}
		void TimMax(int a[],int n,int x){
 			
 			for(int i=0;i<n;i++){
 				if(a[i]>x){
 					cout<<a[i]<<"\t";
				 }
			 }
			
		 }
};
int main(){
	
	Mang1C mang;
	int n;
	int a[100];
	cout<<"Nhap vao so phan tu trong mang: ";
	cin>>n;
	mang.Nhap(a,n);
	cout<<"Mang vua nhap la: ";
	mang.Xuat(a,n);
	int x;
	cout<<"\nNhap x=";
	cin>>x;
	cout<<"\nCac so lon hon x la: ";
	mang.TimMax(a,n,x);
	
}
