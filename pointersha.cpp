#include<iostream>
using namespace std;
main(){
	int a=5;
	int *p=&a;
	int s=++*p;
	cout<<"s: "<<s<<endl;
	cout<<"a:"<<a<<endl;
}