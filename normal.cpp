#include<iostream>
using namespace std;
main(){
	int arr[]={8,2,3,7};
	int size=5;
	int ans=0;
	for(int i=0; i<4; i++){
		ans=(ans*10)+arr[i];
	}
	cout<<ans;
}