#include<bits/stdc++.h>
using namespace std;
class abc{
	public:
	int y;
	public:
	void init(int x){
		y=x;
	}
	void print(){
		cout<<y<<" ";
	}
};
main(){
	abc x;
	abc z;
	//x.y=10;
	x.init(500);
	x.print();
	z.init(6789);
	z.print();
}