#include<bits/stdc++.h>
using namespace std;
class inherit{
	public:
		int age;
		int weight;
		int x;
		int y;
		inherit(){
			cout<<"in herit"<<endl;
		}
	protected:
		void set_value(int x,int w){
			this->age=x;
			this->weight=w;
		}
		void print_value(){
			
			cout<<this->age<<endl;
			cout<<this->weight<<endl;
		}
		void setvalue(int x,int y){
			this->x=x;
			this->y=y;
		}
		int getvalue(){
			return this->x;
		}
		get2__value(){
			return this->y;
		}
};
class new_inherit : public inherit{
	public:
	new_inherit(){
		cout<<endl<<"new in herit"<<endl;
	}
	void setx_value(int x,int y){
		set_value(x,y);
	}
	void print(){
		print_value();
	}
	void setyvalue(int x,int y){
		setvalue(x,y);
	}
	int get_value(){
		return getvalue();
	}
	int get2_value(){
		return get2__value();
	}
	
	
};
class new2_inherit : public new_inherit{
	public:
	void setxvalue(int x,int y) {
		setyvalue(x,y);
	}
	int  add_number(){
		int val1=get_value();
		int val2=get2_value();
		return val1+val2;
		
	}
};
int main(){
	new_inherit *n1=new new_inherit();
	n1->setx_value(10,15);
	new_inherit *n2=new new_inherit();
	n2->setx_value(55,66);
    n1->print();
    n2->print();
    new2_inherit *nst= new new2_inherit();
    nst->setxvalue(34,45);
    cout<<nst->add_number();
}