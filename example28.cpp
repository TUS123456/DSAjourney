#include<iostream>
using namespace std;
int QUICK_SORT(int array[],int,int);
int PARTIONED(int array[],int, int);
int QUICKSORT(int array[],int ,int);
int QUICK_SORT(int ar[],int start,int end){
	if(start < end){
		int q=PARTIONED(ar,start,end);
	    QUICKSORT(ar,start,q-1);
	    QUICKSORT(ar,q+1,end);
	}
}
int PARTIONED(int ar[],int start, int end){
	int x = ar[end];
	int i=start-1;
	for(int j=start; j < end-1; j++){
		if(ar[j]<= x){
			i=i+1;
			int temp=ar[i];
			    ar[i]=ar[j];
			    ar[j]=temp;
		}
	}
	int temp=ar[i+1];
	ar[i+1]=ar[end];
	ar[end]=temp;
    return i+1;	
}
main(){
	int ar[]={5,4,3,2,1};
	int start=1;
	int end =5;
    QUICK_SORT(ar,start,end);
    for(int i=0;i < 5; i++){
    	cout<<"\n"<<ar[i];
	}
}
