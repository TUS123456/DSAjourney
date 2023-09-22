#include<iostream>
using namespace std;
void *findTwoElement(int *arr, int n) {
        int i=0;
        while(i<n){
        	//cout<<arr[arr[i]-1]<<endl;
			cout<<i<<" ";
			
			if(arr[i] != arr[arr[i]-1]){
			//cout<<"first";
			swap(arr[i],arr[arr[i]-1]);
            cout<<arr[i]<<" "<<arr[arr[i]-1]<<endl;
            }
            else{
                i++;
            }
        }
        for(int i=0; i<n; i++){
        	cout<<"HI";
            if(arr[i] != i+1){
                cout<<arr[i]<<" "<<i+1;
            }
        }
}
main(){
	int arr[]={2,2};
	findTwoElement(arr,2);
}