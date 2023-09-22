#include<bits/stdc++.h>
using namespace std;
main(){
	int i=0;
	int arr[]={1,2,3,4,5};
	while(i <= 2){
		int x=0;
		while(x <= 5){
			swap(arr[x],arr[x+1]);
			x++;
		}
		i++;
	}
	for(int j=0; j<5; j++){
		cout<<arr[j]<<" ";
	}
}