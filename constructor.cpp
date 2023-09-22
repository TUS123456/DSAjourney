#include<iostream>
using namespace std;
class book{
	private:
		int a,b;
	public:
		void set_serial(int x){
			a=x;
		}
		void show_serial(){
			cout<<"\n"<<a;
		}
		/*book(int x){
			cout<<"\n"<<x;
		}
		book(int x,int y){
			cout<<"\n"<<x<<" "<<y;
		}*/
};
main(){
	book b,b1;
	b.set_serial(456);
	b.show_serial();
}
