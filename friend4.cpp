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
		friend complex operator-(complex);
};
complex operator-(complex c){
	complex temp;
	temp.a=-c.a;
    temp.b=-c.b;
    return(temp);
}
main(){
	complex c,c1;
	c1.set_data(4,5);
	c1.show_data();
	c=-c1; //c=operator-(c1)
    c.show_data();
}
