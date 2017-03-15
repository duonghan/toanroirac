#include<iostream>
#include<conio.h>

using namespace std;

int count;
bool stop;

void display(int arr[], int length){
	for(int i = 1; i<= length;i++)
		cout<<arr[i];
	cout<<endl;
}

void generate(int arr[],int length){
	int i = length;
	
		
		while(arr[i] == 1 && i>0)
		{
			arr[i] = 0;
			i--;
			
		}
		
		if(i>0) arr[i] = 1;
		else
		stop = true;
	
}

void Init(int arr[], int length){
	stop = false;
	for(int i = 1 ; i<= length; i++)
		arr[i] = 0;
}

int main(){
	const int MAX =1000;
	int * arr = new int[MAX];
	int n;
	
	cout<<"Nhap vao so ki tu n: ";
	cin>>n;
	Init(arr, n);
	
	while(!stop){
		count+=1;
		cout<<"#"<<count<<" : ";
		display(arr,n);
		
		generate(arr,n);
	}
	
	getch();
	return 0;
}
