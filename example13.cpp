#include<iostream>
using namespace std;
class A{
	public:
		void f1(){
			cout<<"class A";
		}
	    void set(){
	    cout<<"A";	
		}
		void show_data(int x){
			cout<<x;
		}
		
};
class B:public A{
	private:
		int a;
	public:
		void f1(){
			cout<<"class B";
		}
		void set(int x){
		a=x;	
		}
        void show(){
		 show_data(a);
		}
};
main(){
	B obj;
	obj.f1();
	obj.set();
	obj.show();
}
