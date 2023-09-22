#include<iostream>
using namespace std;
class Box{
	private:
		int l,b,h;
	public:
		void set_data(int x,int y,int z){
			l=x;
			b=y;
			h=z;
		}
		void show_data(){
			cout<<"\n"<<l<<" "<<b<<" "<<h;
		}
};
main(){
	Box b;
	Box *p;
	b.set_data(56,8,9);
	b.show_data();
	p=&b;
	p->show_data();
   
}
