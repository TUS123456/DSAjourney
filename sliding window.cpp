#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print_vector(vector<int> &arr){
	for(int i=0; i<10; i++){
		cout<<arr[i]<<" ";
	}
}
void print_deque(deque<int> dque){
	int size=dque.size();
	cout<<size<<" "<<endl;
	for(int i=0; i<size; i++){
		cout<<dque.front()<<" ";
		dque.pop_front();
	}
	cout<<endl;
}
int max_in_que(vector<int> dque){
	int size=dque.size();
	int max=dque[0];
	for(int i=1; i<size; i++){
		if(max < dque[i]){
			max=dque[i];
		}
	}
	return max;
}
vector <int> max_of_subarrays(int ans, int n, int k){
	deque<int> dque(3);
	vector<int> anw;
	int i=0;
	while(i<n){
		for(int i=0; i<n; i++){
			for(int )
		}
	}
	
	return anw;
}
main(){
	vector<int> arr(10);
	for(int i=0; i<10; i++){
	    cin>>arr[i];                                                 
	}
	print_vector(max_of_subarrays(arr,10,3));
	/*for(int i=0; i<10; i++){
		for(int j=j+i; j<3; j++){
			dque.push_back(arr[j]);
		}
		print_deque(dque);	
	}*/
	//print_vector(arr);
}
