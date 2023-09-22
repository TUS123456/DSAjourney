#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> &arr){
	int i=0;
	if(i >= arr.size()){
		return;
	}
	cout<<arr[i]<<" ";
	i++;
	print_vector(arr);
}
main(){
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(4);
	arr.push_back(3);
	arr.push_back(4);
	int size=arr.size();
    print_vector(arr);
} 
