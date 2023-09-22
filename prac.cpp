#include<iostream>
using namespace std;
class A{
	public:
		void class_name(void){
			cout<<"class A";
		}
};
class B : public A{
	A *a;
	public:
	B(A *b){
		this->a=b;
	}
		void class_name(void){
			cout<<"class B";
		}
};
main(){
	A a;
	B *b(&a);
	
}

