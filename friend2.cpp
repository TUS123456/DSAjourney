#include<iostream>
using namespace std;
class second;
class first{
	private :
	int a;
	public:
		void set_data(int x){
			a=x;
		}
		void show_data(){
			cout<<"\n"<<a;
		}
		friend void sum(first,second);
};
class second{
		private :
	    int a;
	    public:
		void set_data(int x){
			a=x;
		}
		void show_data(){ 
			cout<<"\n"<<a;
		}
		friend void sum(first,second);
};
void sum(first o1,second o2){
	cout<<"\n"<<o1.a+o2.a;
}
main(){
       first obj1;
	   second obj2;
	   obj1.set_data(5);
	   obj1.show_data();
	   obj2.set_data(10);
	   obj2.show_data();
	   sum(obj1,obj2);	
}
