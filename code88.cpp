#include<iostream>
using namespace std;
int A(int n,int x){
	if(n==0){
		return 1;
	}
		return x * A(n-1,x);
}
main(){
	int n,x;
	cout<<"enter number power found"; 
	cin>>n;
	cout<<"enter power";
	cin>>x;
	cout<<A(x,n);
}
