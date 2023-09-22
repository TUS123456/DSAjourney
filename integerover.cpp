#include<iostream>
using namespace std;
class integer{
	private:
		int x;
	public:
	void set_data(int a){
		x=a;
	} 
    void show_data(){
    	cout<<"\n a="<<x;
	}
	integer operator++(){
		integer i;
		i.x=++x;
	    return(i);
	}
	integer operator++(int){
		integer i;
		i.x=x++;
		return(i);	
		}  
};
main(){
	integer i,i1,i2,i4;
	i.set_data(4);
	i2.set_data(10);
	i1=++i;   //pre increment
	i4=i2++;   //post increment
    i.show_data(); 
	i1.show_data();
	i2.show_data();
	i4.show_data();
}
