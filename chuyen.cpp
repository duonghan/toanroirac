#include<iostream>
#include<cstring>

using namespace std;

int main(){
	char str[20];
	int digit[20];
	int count =0, j=0;
	cout<<"so ";
	cin>>str;
	for(int i=0; i<strlen(str);i++){
		
		digit[j] = ((int)str[i] -48)*100 + ((int)str[i+1] -48)*10 + (int)str[i+2] -48;
		i+=2;
		j++;
	}
	count = j;
	for(int i = 0; i<count; i++)
		cout<<digit[i];

	return 0;
}
