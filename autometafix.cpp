#include<iostream>
using namespace std;
bool is_ugly(int n){
	if(n==0){
		return false;
	}
	while(n%2==0){
		n=n/2;
	}
	while(n%3==0){
		n=n/3;
	}
	while(n%5==0){
		n=n/5;
	}
	return n==1 ? true : false;
}
main(){
	string str="abxba";
	int left=0;
	int right=str.size()-1;
	bool ans=true;
	while(left <= right){
		if(str[left] != str[right]){
			ans=false;
			break;
		}
		else{
			ans=true;
			left++;
			right--;
		}
	}
	cout<<ans<<endl;
}