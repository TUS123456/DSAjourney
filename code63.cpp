#include<iostream>
using namespace std;
main(){
	int sp=0,lne=0,end=5;
	while(sp < end){
		cout<<" ";
	sp++;
	}
	for(lne=0;lne<end;lne++){
		for(int pr=lne+1;pr<=end;pr++){
			cout<<"*";
			cout<<endl;
		}
	}
	
}
