#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int> &ans){
	for(auto val : ans){
		cout<<val<<" ";
	}
}
main(){
	vector<int> arr={1,2,6,3,0,7,1,7,1,9,7,5,6,6,4,4,0,0,6,3};
	vector<int> ans;
	int k=516;
	int n =arr.size();
	int t=n;
	unsigned long long int sum=0;
	for(int i=0; i<n; i++){
		sum=sum+(pow(10,t)*arr[i]);
		t--;
		cout<<sum<<endl;
	}
	//cout<<sum;
	sum=sum+516;
	cout<<"total sum"<<endl;
	cout<<sum<<endl;
	while(sum > 0){
		long long int digit=sum%10;
		ans.push_back(digit);
		sum=sum/10;
	}
	reverse(ans.begin(),ans.end());
	print_vec(ans);
}