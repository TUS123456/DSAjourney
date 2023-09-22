#include<bits/stdc++.h>
using namespace std;
class animal{
	public:
	animal(){
		cout<<"animal contructor in public";
	}
	/*public:
		int age;
		string name;
	private:
		int weight;
	public:
	void set_weight(int x){
		this->weight=x;
	}
	void dispaly(){
		cout<<"dog age"<<"->"<<this->age<<endl;
		cout<<"dog name"<<"->"<<this->name<<endl;
		cout<<"dog weight"<<"->"<<this->weight<<endl;
	}
	void setting(int x,string name){
		this->age=x;
		this->name=name;
	}*/
	
};
main(){
	animal *ani=new animal();
	/*ani->set_weight(50);
	ani->setting(6,"haary");
	ani->dispaly();*/
	
}