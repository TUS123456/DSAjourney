#include<iostream>
using namespace std;
// global variable decleration
int *score=new int;
a(){
	cout<<"score in a"<<score;
    cout<<endl;
}
b(){
cout<<"score in b"<<score;
cout<<endl;
}
c(){
cout<<"score in c"<<score;	
cout<<endl;
}
main(){
	a();                        //function call
	b();
	c();
}
