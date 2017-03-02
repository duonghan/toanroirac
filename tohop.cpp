//viet ham liet ke tat ca cac to hop cua cac so tu 1,2,3,....,N

#include<iostream>
using namespace std;

int X[100];
int k,n,i;
int count;

//ham dua ra man hinh
void processConfig(){
	count++;
	cout<<"So #"<<count<<" : ";
	for(int i=1; i<=k;i++){
		cout<<X[i]<<" ";
	}
	cout<<endl;
}

//ham xet ung cu vien
void Try(int i){
	int v;//khoi tao gia tri value
	
	for(v=X[i-1]+1;v<=n-k+i;v++){
		X[i] = v;
		if(i == k) processConfig();
		else Try(i+1);
	}
	
}
int main(){
	cout<<"Nhap cac gia tri n va k: ";
	cin>> n>> k;
	Try(1);
	return 0;
}
