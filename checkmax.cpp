#include<iostream>
using namespace std;
main(){
	int N;
    cout<<"enter size";
	cin>>N;
	int arr[N];
	int max=0;
	int prev;
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	for(int i=0; i<N; i++){
		if(max<arr[i]){
			prev=max;
			max=arr[i];
		}
	}
	cout<<endl<<prev;
    
}
