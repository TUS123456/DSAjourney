#include<bits/stdc++.h>
using namespace std;
class animal{
	public:
		animal(){
			cout<<"constructor animal"<<endl;
		}
};
class dog : public animal{
	public:
		dog(){
			cout<<"constructor dog"<<endl;
		}
};
class cat : public animal{
	public:
		cat(){
			cout<<"constructor cat"<<endl;
		}
};

class tiger : public animal,dog,cat{
	public:
		tiger(){
			cout<<"constructor tiger"<<endl;
		}
};
main(){
	tiger *tgr=new tiger();
}