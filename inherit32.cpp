#include<bits/stdc++.h>
using namespace std;
class parent{
	public:
		int x;
		int y;
	void set_val(int x,int y){
		this->x=x;
		this->y=y;
	}
};
class child : public parent{
	public:
		int t;
		int u;
	void sets_val(int t,int u){
		this->t=t;
		this->u=u;
	}
};
main(){
	parent *pr=new parent();
	cout<<sizeof(pr)<<endl;
	child *chd=new child();
	chd->
	cout<<sizeof(chd)<<endl;
}