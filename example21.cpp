#include<iostream>
using namespace std;

void rotate_arr(int arr[],int size,int n){
	for(int i=0; i<n; i++){
		array_rotate(arr,size);
	}
}
void array_rotate(int arr[],int size){
     int temp=arr[0];
	 for(int i=0; i<=size-1; i++){
	 	arr[i]=arr[i+1];
	 }
	 arr[size-1]=temp;	
}
void print_array(int arr[],int size){
	for(int i=0; i<=size-1; i++){
		cout<<" "<<arr[i];
	}
}
main(){
  int arr[5]={34,56,78,90,23,45};
  int size=sizeof(int)/sizeof(arr[0]);
  

}
