#include<bits/stdc++.h>
using namespace std;
class encapsii{
	private:
	int age;
	string name;
	public:
	void set_name(int age,string name){
		this->age=age;
		this->name=name;
	}
	int get_age(){
		return this->age;
	}
	string get_name(){
		return this->name;
	}
};
main(){
	encapsii *dt = new encapsii();
	dt->set_name(10,"raman");
	cout<<dt->get_age();
	cout<<"->"<<dt->get_name();
}