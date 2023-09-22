#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int *arr=new int[n];
	memset(arr,2,sizeof(arr));
	/*for(int i=0; i<n; i++){
		int num;
		cin>>num;
		arr[i]=num;
	}
	for(int i=0; i<n; i++){
		cout<<2*arr[i]<<" ";
	}*/
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]*2<<" ";
	}
}