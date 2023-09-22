#include<bits/stdc++.h>
using namespace std;
int search(int x,int arr[],int n){
    for(int i=0; i<=n-1; i++){
        if(x==arr[i]){
            return 1;
        }
    }
    return 0;
}
int firstMissing(int arr[], int n)
{
	int temp;
   sort(arr,arr+n);
   for(int i=0; i<=n; i++){
   	temp=search(i,arr,n);
   	if(temp==1){
   		continue;
	   }
	else{
		return i;
	}
   }
}
void print_array(int arr[],int n){
	for(int i=0; i<=n-1; i++){
		cout<<" "<<arr[i];
	}
	cout<<endl;
}
main(){
	int res;
	int arr[]={3,2,-6, 1, 0};
	int size=sizeof(arr)/sizeof(arr[0]);
    res=firstMissing(arr,size);
    cout<<res;
}
