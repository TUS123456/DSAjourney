#include<iostream>
using namespace std;
int fibo_num(int n){
    if(n==0)
    return 0;
	if(n==1)
	return 1;
	else
    return fibo_num(n-1)+fibo_num(n-2);
}
main(){
	int *ans=new int;
	int n;
	cout<<"enter number of a fibbonacci";
	cin>>n;
    *ans=fibo_num(n);
    cout<<endl<<*ans;
    delete(ans);
}
