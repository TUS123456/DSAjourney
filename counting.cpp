#include<iostream>
#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr;
	arr.push_back(1);
    arr.push_back(2);
	arr.push_back(3);
	arr.push_back(5);	
	int size=arr.size();
	int sum=0;
	for(int i=0; i<size; i++){
		sum+=arr[i];
	}
	cout<<"sum:"<<" "<<sum<<endl;
	int max=*max_element(arr.begin(),arr.end());
    int max_sum=0;
	cout<<"max :"<<" "<<max<<endl;
    for(int i=1; i<=max; i++){
    	max_sum+=i;
	cout<<"max_sum :"<<" "<<max_sum<<endl;
	}
    cout<<endl;
	cout<<"size:"<<" "<<size<<endl;
	int difelement=max_sum-sum;
	cout<<"dif_element :"<<" "<<difelement<<endl;
}
