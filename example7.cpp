#include<iostream>
using namespace std;
class array{
	private:
		int ar[10];
	public:
		void insert_value(int index,int value){
			ar[index]=value;
		}
		void display_value(int index){
			cout<<ar[index];
		}
};
class STACK:public array{
	private:
	int top,total;
    public:
    void set_data(int value){
    	if(top <= total){
    		insert_value(top,value);
    		top++;
		}
	}
	void display(){
		display_value(top);
	}
};
main(){
	STACK S;
	S.set_data(10);
    S.display();
}
