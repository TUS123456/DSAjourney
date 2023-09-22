#include<iostream>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		friend ostream& operator<<(ostream&,complex);
		friend istream& operator>>(istream&,complex&);
};
ostream& operator<<(ostream &dout,complex c){
	return dout <<"\n a="<<c.a<<" "<<"b="<<c.b;
}
istream& operator>>(istream &din,complex &c){
	return din >>c.a>>c.b;
}
main(){
	complex c1;
    cin>>c1;
	cout<<c1;  
}
