#include<iostream>
using namespace std;
class A{
	public:
		virtual void f1(){
			cout<<"A";
		}
};
class B:public A{
	public:
		void f1(){
			cout<<"B";
		}
};
main(){
 A *p;
 B o1;
 p=&o1;
 p->f1();
}
