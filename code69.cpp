#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main(){
	int N=5,sum=0;
	int S=12;
	int count=0;
	int A[]={1,2,3,7,5};
    for(int i=0; i<N; i++){
    	for(int j=i; j<N; j++){
    	sum=sum+A[j];
    	if(sum==S){
    	count++;	
    	cout<<i<<" "<<j<<endl;
    }
   }
   sum=0; 
}
cout<<"total number of times dum is"<<" "<<count<<" "<<endl;
}
    
