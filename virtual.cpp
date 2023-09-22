#include<iostream>
using namespace std;
class A{
	public:
		virtual void f1(){
			cout<<"clas A"<<endl;
		}
};

class B:public A{
	public:
		void f1(){    //function overiiding
			cout<<"clas B"<<endl;
		}
};
main(){
	A *p,o1;
	B o2;
	B *Bptr;
	p=&o2;
	
	
	p->f1();
	
	
}