#include<bits/stdc++.h>
using namespace std;
class soltuion{
	public:
	void heapify(vector<int> &arr,int n,int i){
		cout<<"HEAP";
		int largest=i;
		int left=2*i+1;
		int right=2*i+2;
		
		if(left < n && arr[largest]< arr[left]){
			largest=left;
		}
		if(right < n && arr[largest]< arr[right]){
			largest=right;
		}
		if(largest !=  i){
			swap(arr[largest],arr[i]);
			heapify(arr,n,largest);
		}
	}
	void print_array(vector<int> &arr){
		for(int i=0; i<arr.size(); i++){
			cout<<arr[i]<<" ";
		}
	}
};
main(){
	soltuion ak;
	vector<int> arr;
	arr.push_back(12);                       //  { 12, 11, 13, 5, 6, 7 }
    arr.push_back(11);
    arr.push_back(13);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    ak.print_array(arr);
    int size=arr.size();
	for(int i=size/2; i>=0; i--){
    	ak.heapify(arr,arr.size(),i);
	}
		
	cout<<endl;
	ak.print_array(arr);
}
