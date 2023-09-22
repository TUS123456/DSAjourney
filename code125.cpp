#include<iostream>
#include<bits/stdc++.h>
#include<iterator>
using namespace std;
main(){
	int arr[]={1,23,4,5,7,9,99};
	pair<int,int>  vec;
	pair<int,int>::iterator  itr;
	int i=0;
	for(auto itr : vec){
		itr->fisrt=i;
		itr->second=i+1;
	    i++;
	}
	for(int i=0; i<=6; i++){
		cout<<pair[i].first<<" "<<pair[i].second<<endl;
	}
}
