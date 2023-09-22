#include<iostream>
using namespace std;
class C;
class A{
	public:
	int a;
};
class B:public A{
	public:
	void set_data(int x){
		a=x;
	}
	friend C &operator=(const B &,const C &);
};
class C:public B{
	public:
		void show_data(){
			cout<<a;
		}
	friend C &operator=(const B &,const C &);
};
C operator=(B x,C y){
	y.a=x.a;
   return(y);
}

main(){
	B b;
	C c;
	b.set_data(4);
    c=b;//operator=(b,c);
	c.show_data();
}
