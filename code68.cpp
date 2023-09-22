#include<iostream>
using namespace std;
main(){
	int s=12,sum=0;
int A[] = {1,2,3,7,5};
for(int i=0; i<5;){
	sum=sum+A[i];
	if(sum==s){
		cout<<i;
	}
	else
	i++;
}
cout<<"no";
}
