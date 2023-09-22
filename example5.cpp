#include<iostream>
using namespace std;
class third;
class second;
class first{
	public:
	int a;
	void set_data(int x){
		a=x;
	} 
};
class third:public first{
	public:
		void show_data(){
			cout<<a;
		}
};
main(){
    third t;
    t.a;
    t.set_data(8);
    t.show_data();
}
