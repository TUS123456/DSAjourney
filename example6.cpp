#include<iostream>
using namespace std;
class S{
    private:
		int a;
	protected:
		void set_value(int k){
			a=k;}
};
class B: public S{
	public:
	void set_data(int x){
		set_value(x);
	}	
};
main(){
	B c;
	c.set_data(4);
}

