//unique element
#include<bits/stdc++.h>
using namespace std;
void print_arra(vector<int> &arr){
    for(int x=0; x<arr.size();x++){
		cout<<(arr[x])<<" ";
    }
}
main(){
	vector<int> arr={1,2,4,2,1,3,6,5,5,6,4};
	print_arra(arr);
	int val=0;
	for(int i=0; i<arr.size(); i++){
		val=val^arr[i];
	}
	cout<<endl<<val<<" "<<endl;
}