#include<bits/stdc++.h>
using namespace std;
class A{
	public:
		void fun1(){
			cout<<"class A function1"<<endl;
		}
		void fun2(){
			cout<<"class A function2"<<endl;
		}
		
};

class B:public A{
	public:
	void fun1(){
		cout<<"class B function1"<<endl;
	}
	void fun2(int x){
		cout<<"class B function2"<<endl;
	}
};
main(){
	B obj;
	obj.fun1();
	obj.fun2();
	A obj1;
	obj1.fun1();
}