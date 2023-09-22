#include<iostream>
using namespace std;
main(){
	int arr[] = {1,2,3,4,5,6};
	int size=6;
	for(int i=0; i<6; i++){
		if(i%2==0){
			int maxi=max_element(arr+i,arr+size);
			swap(arr[i],maxi);
		}
		else{
			
		}	
	}
}