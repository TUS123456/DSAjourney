#include<iostream>
using namespace std;
int QUICK_SORT(int [],int,int);
int PARTIONED(int [],int, int);
int QUICKSORT(int [],int ,int);
int QUICK_SORT(int array[],int start,int end){
	if(start < end){
		int q=PARTIONED(array,start,end);
	    QUICKSORT(array,start,q-1);
	    QUICKSORT(array,q+1,end);
	}
}
int PARTIONED(int arrray[],int start, int end){
	int x = arrray[end];
	int i=start-1;
	for(int j=start; j < end-1; j++){
		if(arrray[j]<= x){
			i=i+1;
			int temp=arrray[i];
			    arrray[i]=arrray[j];
			    arrray[j]=temp;
		}
	}
	int temp=arrray[i+1];
	arrray[i+1]=arrray[end];
	arrray[end]=temp;
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
