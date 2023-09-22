#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
using namespace std;
main(){
	vector<int> v;
    v.assign(5,10);
    vector<int> :: iterator it;
    for(it=v.begin(); it !=v.end(); it++){
    	cout<<(*it)<<" "<<endl;
	}
	cout<<endl;
    v.insert(v.begin(),76);
    for(it=v.begin(); it !=v.end(); it++){
    	cout<<(*it)<<" "<<endl;
	}
}
