#include<iostream>
using namespace std;
int checkconcat(string a,string b){
	return (a+b).length()>120;
}
int main(){
	int8_t a=200;
	uint8_t b=100;
	cout<<"a="<<(int)a;
	cout<<",b="<<(int)b;
}