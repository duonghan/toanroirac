#include<iostream>
#include<conio.h>

using namespace std;

//khai bao cac bien toan cuc
int a[100];
int n;
int count; //dem so TH thoa man
//ham dua ra man hinh
void processConfig(){
	count++;
	cout<<"So #"<<count<<" : ";
	for(int i=1; i<=n;i++)
		cout<<a[i];
	cout<<endl;
}

//ham xet ung cu vien
void Try(int k){
	int v;//khoi tao gia tri value
	for(v=0; v<=1; v++){
		
		a[k] = v;
		if(k == n) processConfig();//neu k=n thu duoc 1 so nhi phan
		else Try(k+1);
	}
}


int main(){
		cout<<"Nhap n: ";
		cin>>n;
		count=0;
		Try(1);
		getch();
		return 0;
}
