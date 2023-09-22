#include<iostream>
//#include<array>
using namespace std;
void show_data(int x){
	cout<<x<<endl;
}
void show_array(int arr[]){
	int size=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<=size;++i){
	cout<<arr[i]<<" ";
	}
}
main(){
	int arr[]={3,4,5,1,3,5,8,9};
	show_array(arr);
	cout<<endl;
	}

