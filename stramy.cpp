#include<iostream>
#include<vector>
using namespace std;
class person{
	public:
		virtual void fun()=0;
};

class male: public person{
	public:
		void fun(){
			cout<<"male fun"<<endl;
		}
};

class female: public person{
	public:
		void fun(){
			cout<<"female fun"<<endl;
		}
};

class call{
	public:
		call(male *m){
			m->fun();
		}
};
main(){
	female fm;
	call cl(&fm);
	
}