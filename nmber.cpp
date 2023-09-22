#include<iostream>
using namespace std;
main(){
	int start,end;
	cout<<"enter start and number";
	cin>>start>>end;
	while(start <= end){
		cout<<start++<<" ";
	}
}