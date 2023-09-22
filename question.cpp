#include<bits/stdc++.h>
using namespace std;
main(){
	map<int,int> mp;
	vector<int> arr={2,3,3,5,3,2,4,5};
	for(int x=0; x<arr.size();x++){
		mp[arr[x]]++;
	}
	int count=0;
	cout<<endl;
	cout<<"value greater h";
    for(int x=0; x<mp.size(); x++){
		if(mp[x]>1){
			int num=mp[x]-1;
    		count=count+num;
    	}
    }
    cout<<count;
}
