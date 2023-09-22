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
			cout<<"\na="<<a<<" "<<"b="<<b;
		} 
		complex operator *(){
			complex temp;
		    	temp.a=a*8;
			    temp.b=b*9;
			    return(temp);
		}
};   
main(){
 complex c1,c2,c3,c4;
 c1.set_data(5,6);
 c1.show_data();
 c2.set_data(4,5);
 c2.show_data();
 c3=c1.operator *();		
 c3.show_data();	
 c4=c2.operator *();
 c4.show_data();
}

