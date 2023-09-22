#include<iostream>
using namespace std;
bool check_even(int n){
	if(n%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
main(){
	//int arr[]
	int n;
	cin>>n;
	
	bool num=check_even(n);
	cout<<num;
}