//reverse the array in k grp
#include<bits/stdc++.h>
using namespace std;
void solve(vector<int> &arr,int pos,int swap_last_pos,int k){
	if(pos >= arr.size()){
		return;
	}	
	int i=swap_last_pos;
	while(pos <= i){
		swap(arr[pos],arr[i]);
		pos++;
		i--;
	}
	solve(arr,pos,swap_last_pos+k,k);
}
main(){
	vector<int> arr={1, 2, 3, 4, 5, 6, 7, 8};
	int k=3;
	int pos=0;
	int swap_last_pos=k-1;
	solve(arr,pos,swap_last_pos,k);
}