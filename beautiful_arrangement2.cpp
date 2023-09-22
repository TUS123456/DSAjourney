#include<bits/stdc++.h>
using namespace std;
void solution(vector<int> &v,int num,int &ans,int current_val){
	//base condition
	if(current_val==num+1){
		ans++;
		return;
	}
	//main code
	for(int i=1; i<=num; i++){
		if(v[i]==0 && (i % current_val==0 || current_val % i ==0)){
			v[i]=i;
			solution(v,num,ans,current_val+1);
			v[i]=0;
		}
	}
}
main(){
	int num=1;
	vector<int> v(num+1);
	int ans=0;
	solution(v,num,ans,1);
    cout<<ans;
}