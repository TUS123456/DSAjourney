#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		void set_data(int x,int y){
			a=x;b=y;
		}
		void show_data(){
			cout<<"\n a="<<a<<" "<<"b="<<b;
	   }
	   friend void sum(complex);
	   friend void mul(complex);
};
        void sum(complex c){
	   	cout<<"\n"<<c.a+c.b;
	    }
	    void mul(complex c){
	    	cout<<"\n"<<c.a*c.b;
		}
main(){
	complex c;
	c.set_data(7,5);
	c.show_data();
    sum(c);
    mul(c);
}
