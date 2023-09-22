#include<iostream>
using namespace std;
void print_array(int arr[],int size){
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}
void incree(int arr[],int size){
	arr[0]=arr[0]+10;
	print_array(arr,size);
}
main(){
	int arr[2]={5,6};
	int size=2;
	incree(arr,size);
	print_array(arr,size);
}