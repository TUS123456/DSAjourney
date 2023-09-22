#include<iostream>
#include<vector>
using namespace std;
main(){
	vector<int> arr;
	int ans=sizeof(arr)/sizeof(int);
	cout<<endl<<ans;;
	cout<<arr.size();
    cout<<endl<<arr.capacity();
 }