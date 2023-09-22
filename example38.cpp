#include<iostream>
using namespace std;
template <class T>
class student{
	private:
		T stuname;
	public:
		void set_name(T name){
			stuname=name;
		}
		T get_name(){
			cout<<stuname;
		}
};
main(){
	student<char> s;
	s.set_name('Tushar');
	s.get_name();
}
