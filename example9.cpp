#include<iostream>
using namespace std;
class STACK{
	int arr[10];
	int top;
	int lower=0,upper=10;
	public:
		void insert_value(int x){
        arr[lower]=x;
        top=lower;
		lower++;
	}
    	void display(){
    		cout<<arr[top];
    		top--;
		}
};
main(){
	STACK s,s1;
	s.insert_value(10);
    s1.insert_value(34);
	s.display();
    s1.display();
}
