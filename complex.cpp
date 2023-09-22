#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
    public:
    	void set_data(int,int);
	    void show_data(){
	    	cout<<"\na="<<a<<"b="<<b;
		}
	    complex add(complex);
};
complex complex::add(complex c)
{
	    	complex temp;
	    	temp.a=a+c.a;
	    	temp.b=b+c.b;
	    	return(temp);
}
void complex::set_data(int x,int y){
	a=x;b=y;
}
main(){
	complex c1,c2,c3;
	c1.set_data(4,5);
	c2.set_data(5,6);
	c3=c1.add(c2);
	c3.show_data();
}
