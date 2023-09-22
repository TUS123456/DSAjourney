#include<bits/stdc++.h>
using namespace std;
void print_ta(int indii,int n){
	if(indii>10){
		return;
	}
	cout<<n<<"*"<<indii<<"="<<indii*n<<endl;
	print_ta(indii+1,n);
}
main(){
	print_ta(0,56789);
}