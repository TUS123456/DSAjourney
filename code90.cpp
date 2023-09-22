#include<iostream>
using namespace std;
int count(int n){
  if(n==0){
  	return 0; 
  }
  	  count(n-1);
	  cout<<n<<" ";
}
main(){
	int n;
	cout<<"enter number";
	cin>>n;
	if(n<=0){
		cout<<"invalid number";
	}
	else{
		count(n);
	}
}
