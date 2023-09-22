#include<iostream>
using namespace std;
class b;
class c;
class a{
 public:
 	int a,b;
 	void set_data(int x,int y){
 		a=x;b=y;
	 }
	 friend class b;
};
class b{
	public:
	friend class a;
	friend class c;
};
class c{
	public:
	friend class b;
};
int main(){
	c c;
	c::b;
}

