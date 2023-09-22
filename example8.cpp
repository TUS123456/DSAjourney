#include<iostream>
using namespace std;
class STACK{
	private:
		int arr[5];
		int top=0,lower=0,upper;
    public:
    	void set_value(int value){
    		arr[top]=value;
    		top++;
		}
		void show_value(){
			cout<<arr[lower];
			lower++;
		}
};
main(){
	STACK s;
	s.set_value(10);
	s.show_value();
	s.set_value(20);
	s.show_value();
}
