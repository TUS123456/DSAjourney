#include<iostream>
using namespace std;
inline int get_max(int& a,int& b){
	return (a>b)?a:b;
	cout<<a<<b;
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<get_max(x,y);
   return 0;
}
