#include<iostream>
using namespace std;
bool check_arraysort(int arr[],int size){
	bool ans;
	if(size==0||size==1){
			return true;
	}
	if(arr[0]>arr[1]){
		return false;
	}
		ans=check_arraysort(arr+1,size--);
	    return ans;
}
main(){
	int arr[5]={1,8,3,4,5};
	cout<<"given array"<<endl;
	for(int i=0; i<5; i++){
		cout<<" "<<arr[i];
	}
	bool ans= check_arraysort(arr,5);
	cout<<endl;
	if(ans){
	cout<<"array is sorted";
    }
	else
	{
	cout<<"array is not sorted";
    }
}
