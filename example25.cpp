#include<iostream>
#include<algorithm>
#include<array>
using namespace std;
int pos(int[],int,int);
main(){
    int n=9;
	int arr[]={2,7,11,15};
	int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+size);
    for(int i=0;i<=size-1;i++){
        cout<<" "<<arr[i];
    }
    int j=pos(arr,size,n);
    cout<<"\n"<<j;
    for(int i=0;i<=j-1;i++){
    	for(int x=i;x<j-1;x++){
    		if(arr[i]+arr[x]==num){
    			cout<<i<<" "<<x;
			}
		}
	}
	}
    int pos(int arr[],int size,int num){
    int i=0;
    while(arr[i]>=num){
    return(i-1);
    }
    i++;
}


