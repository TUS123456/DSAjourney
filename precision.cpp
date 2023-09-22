#include<iostream>
using namespace std;
main(){
	int pre;
	cout<<"number of precision";
	cin>>pre;
	double ans=3;
	double step=0.1;
	for(int i=0; i<pre; i++){
		for(double j=ans; j*j <= 15; j=j+step){
			ans=j;
		}
		step=step/100;
	}
	cout<<ans;
}