#include<iostream>
using namespace std;
class A{
    public:
	int a;
	public:
		A(){
		}
};
class B:public A{
	int b;
	public:
	B(int x,int y):A()
	{
		b=x;
		a=x;
	}
	void show_data(){
		cout<<b<<" "<<a;
	}
};
main(){
}
