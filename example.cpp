#include<iostream>
using namespace std;
main(){
	string a="abcd";                          
    string b="ef";
	int len=a.size();
	int size=b.size();
	cout<<len<<" "<<size;
    string c=a+b;
	cout<<"\n"<<c;
    string s;
    s=a[0];
    a[0]=b[0];
    b[0]=s[0];
    cout<<"\n"<<a<<" "<<b;
}                                         
