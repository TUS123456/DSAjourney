#include<iostream>
using namespace std;
class A{
	public:
		virtual void print(){
			cout<<"in A"<<endl;
		}
};
class B: public A{
	public:
		 void print(){
		 	cout<<"in B"<<endl;
		 }
};
main(){
	A obj1;
	obj1.print();
    	
} 