#include<iostream>
using namespace std;
main(){
	int arr[]={-1,-2,-5,-6,-9};
	int size=10;
	int max=INT_MIN;
	for(int i=0;i<size-1;i++){
		//cout<<"infor";
		if(arr[i]>max){
			//cout<<endl<<"inif;";
			max=arr[i];
			cout<<max<<endl;
		}
	}
	//cout<<max;
}