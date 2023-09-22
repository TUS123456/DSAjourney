#include<iostream>
#include<string>
using namespace std;
main(){
	int arr[3]={1,2,3};
	int brr[3]={5,6,4};
	pair<int,int>  p_array[3];
	p_array[0]={1,5};
	p_array[1]={2,6};
    p_array[2]={3,4};
    for(int i=0; i<=2; i++){
    	cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}
	cout<<"\n";
	swap(p_array[0],p_array[2]);
    for(int i=0; i<=2; i++){
    	cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
	}		
}
