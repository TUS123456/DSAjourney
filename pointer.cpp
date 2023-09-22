#include<bits/stdc++.h>
using namespace std;
main(){
	int arr[10]={1,2,3,4,5,6,7};
	int *pqr= arr;
	int a=10;
	int *pr=&a;
	cout<<*pr<<endl;
	cout<<sizeof(arr)<<endl;
	cout<<sizeof(*pr)<<endl;
    for(int i=0; i<7; i++){
    	cout<<(*(arr)+i)<<endl;
	}
	
}