#include<bits/stdc++.h>
using namespace std;
main(){
	int num;
	cin>>num;
	int acuu;
	cin>>acuu;
	int step=0.1;
	int ans=0;
	for(int i=0; i<acuu; i++){
		for(double j=ans; j*j <ans; j=j+step){
			ans=j;
		}
	}
	cout<<ans;
}