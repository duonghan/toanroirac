#include<iostream>
#include<conio.h>

using namespace std;

int count;

void printResult(int arr[], int length){
	cout<<"#"<<count<<" : ";
	for(int i=1; i<=length; i++)
		cout<<arr[i];
	cout<<endl;
	count++;
}

void Init(int arr[], bool check[], int length){
	for(int i = 1; i<= length; i++)
	{
		arr[i] = i;
		check[i] = false;
	}
}


void TRY(int k, int n, int arr[], bool check[]){
	int v;
	for(v = 1; v<= n; v++)
	{
		if(check[v] == false){
			arr[k] = v;
			check[v] = true;
			if( k == n) printResult(arr, n);
			else
			TRY(k+1,n,arr,check);
			check[v] = false;
		}
		
		
	}
	
}

int main(){
	
	int n;
	cout<<"Nhap vao so nguyen n : ";
	cin>>n;
	
	bool * check = new bool[n+1];
	int *arr = new int[n+1];
	
	Init(arr, check, n);
	TRY(1,n,arr,check);
	
	system("pause");
	return 0;
}
