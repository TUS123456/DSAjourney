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
		friend complex operator+(complex,complex);
};

complex operator+(complex x,complex y){
	complex temp;
	temp.a=x.a+y.a;
	temp.b=x.b+y.b;
	return(temp);
}
main(){
	complex c,c1,c2;
	c1.set_data(4,5);
	c1.show_data();
	c2.set_data(6,7);
	c2.show_data();
    c=c1+c2;     //c=operator+(c1,c2);
    c.show_data();
}
