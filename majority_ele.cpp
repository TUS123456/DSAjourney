#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> arr={3,1,3,3,2};
	int ele=arr[0];
	int fre_ele=0;
	for(int i=1; i< arr.size(); i++){
		if(!fre_ele){
			ele=arr[i];
			fre_ele=1;
		}
		else{
			if(ele==arr[i]){
			fre_ele++;
		    }
		    else{
			fre_ele--;
		    }
		}
    }
	int count=0;
	for(int i=0; i<arr.size(); i++){
		if(ele==arr[i]){
			count++;
		}
	}
	if(count >= arr.size()/2){
		cout<<ele<<endl;
	}
	else{
		cout<<"-1";
	}
}