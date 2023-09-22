#include<iostream>
using namespace std;
main(){
	string a="abcd";
	string b="ef";
	string c,d;
	int len1=a.size();
	int len2=b.size();
	cout<<len1<<" "<<len2;
	c=a+b;
	cout<<"\n"<<c;
    char temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    d=a+b;
    cout<<"\n"<<d;
    cout<<"\n"<<a<<" "<<b;
}



