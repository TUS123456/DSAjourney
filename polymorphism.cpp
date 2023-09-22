#include<bits/stdc++.h>
using namespace std;
class polymor{
	public:
		int sum(int a,int b,int c){
			return a+b+c;
		}
		int sum(int a,int b){
			return a+b;
		}
		int multi(int a,int b){
			return a*b;
		}
};
main(){
	polymor abs;
	cout<<abs.sum(5,6)<<endl;
    cout<<abs.sum(5,6,8)<<endl;
    cout<<abs.multi(5,6)<<endl;
}