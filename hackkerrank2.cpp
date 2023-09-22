#include<iostream>
using namespace std;
main(){
	int time;
	cin>>time;
	int tbl=0;
	while(tbl*2+3 < time){
		tbl=tbl*2+3;
	}
	int sum=(tbl*2+3)+1;
	cout<<sum-time;
	
}