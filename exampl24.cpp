#include<iostream>
using namespace std;

main(){
	int arr[]={1,12,45,67,7};
	int size=(sizeof(arr))/(sizeof(arr[0]));
	cout<<size;
	int i,minindex;
	for(i=0; i < size-1; i++){
       minindex=i;
       
       for(int j=i+1; j < size;j++){
       
	   	if(arr[j] < arr[minindex]){
       		minindex=j;
		   }
	   }
	}
	cout<<minindex;
}

