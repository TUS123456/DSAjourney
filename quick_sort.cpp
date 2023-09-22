#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e){
	int pivot_index=s;
	int pivot_element=arr[s];
	
	int count=0;
	for(int i=s+1; i<=e; i++){
		if(arr[i]<=pivot_element){
			count++;
		}
	}
	
	int pivot_main_indexx=s+count;
	swap(arr[pivot_index],arr[pivot_main_indexx]);
	pivot_index=pivot_main_indexx;
	
	
	int i=s;
	int j=e;
	
	
	while(i < pivot_index && j > pivot_index){
		while(arr[i] <= pivot_element){
			i++;
		}
		while(arr[j] > pivot_element){
			j--;
		}
		
		if(i < pivot_index && j > pivot_index){
			swap(arr[i],arr[j]);
		}
	}
	return pivot_index;
}
void quicksort(int arr[],int s,int e){
	if(s >= e){
		return;
	}
	int indii=partition(arr,s,e);
	
	quicksort(arr,s,indii-1);

    quicksort(arr,indii+1,e);
}
main(){
	int arr[]={8,1,3,4,20,50,30};
	int s=0;
	int e=6;
	quicksort(arr,s,e);
	for(auto val : arr){
		cout<<val<<" ";
	}
	 
}