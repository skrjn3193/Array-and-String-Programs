#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str;
	cout<<"enter string"<<endl;
	gets(str);
	for(int i=0; i<str.length();i++){
		cout<<str[i];
	}
	return 0;
}
