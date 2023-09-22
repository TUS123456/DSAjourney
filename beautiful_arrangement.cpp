#include<bits/stdc++.h>
using namespace std;
void solution(int num,vector<int> &arr,int &ans,int currentele){
	//base
	if(currentele==num){
		ans++;
		return;
	}
	
	//main code
	for(int i=1; i<=num; i++){
		if(arr[i]==0 && (i % currentele== 0 || currentele % i ==0)){
			arr[i]=i;
			solution(num,arr,ans,currentele+1);
			arr[i]=0;
		}
	}
}
main(){
	int num=2;
	vector<int> arr(num+1);
	int ans=0;
	solution(num,arr,ans,1);
	cout<<ans;
}