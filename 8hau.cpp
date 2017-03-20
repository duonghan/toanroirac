#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;
const int N = 8;//so quan hau
int i, count;
int arr[N+1];
//bool found;

void Result(){
	count++;
	cout<<"#"<<count<<" : ";
	
	for(int i=1; i<=N;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}

bool check(int v, int k){
	for(i = 1; i< k;i++){
		//if(arr[i]==v) return false;
		//if(arr[i] + i== k + v) return false;
		//if(arr[i] - i == v - k) return false;
		if(arr[i] == v || abs(i - k) == abs(arr[i] - v)) return false;
	}
	return true;
}

void TRY(int k){
	//if(found) return;
	for(int v = 1; v<= N ; v++){
		if(check(v,k)){
			arr[k] = v;
			if(k == N) {
				Result();
				//found = true;
			}else
			TRY(k+1);
		}
	}
}

int main(){
	//found = false;
	TRY(1);
	system("pause");
	return 0;
}
