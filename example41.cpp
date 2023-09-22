#include<iostream>
coutning_sort(int arr[],int brr[],int k){
	int sarr=sizeof(arr)/sizeof(arr[0]);
	int crr[k];
	for(int i=0; i<=k; i++){
		crr[i]=0;
	}
	for(int i=1; i<=sarr; i++){
		crr[arr[i]]=crr[arr[i]];
	}
	for(i=1;i<=k;i++){
		crr[i]=crr[i]+crr[i-1];
	}
   for(int j=sarr;j>=0;j--){
   	brr[crr[arr[j]]]=arr[j];
   	crr[arr[j]]=crr[arr[j]]-1;
   }
}
