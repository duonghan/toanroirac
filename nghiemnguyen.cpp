#include<iostream>

using namespace std;

int a[100];
int n,S,T;
//bien T luu tru tong cua cac so dung truoc so cuoi cung
int count;
void display(){
	count++;
	cout<<"Cac nghiem nguyen thu "<<count<<" : ";
	for(int j=1 ; j<=n ;j++)
		cout<<a[j]<<" ";
	cout<<endl;
}

void Try(int k){
	for(int v = 1; v<=S-T-n+k;v++){
		a[k] = v;
		T += a[k];
		//duyet den so gan cuoi
		if(k == n-1){
			a[n] = S - T;
			display();
		}else Try(k+1);
		T = T - a[k];
	}
}

int main(){
	cout<<"Nhap vao n va S : ";
	cin>>n>>S;
	Try(1);
	return 0;
}
