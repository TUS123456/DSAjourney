#include<bits/stdc++.h>
#include<iostream>
using namespace std;
main(){
	vector<int> arr{3,4,5,67,8};
	vector<int> brr{9,8,7,6,4};
	vector<pair<int,int> > pr;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			pr.push_back({arr[i],brr[j]});
		}
	}
	//pair<int,int> iterator :: it;
	for(auto it : pr){
		cout<<it.first<<" "<<it.second<<endl;
	}
	
	
	/*pr.push_back({3,4});
	pr.push_back({9,10});
	pr.push_back({91,13});
	cout<<pr[0].first<<" "<<pr[0].second<<endl;
	cout<<pr[1].first<<" "<<pr[1].second<<endl;
	cout<<pr[2].first<<" "<<pr[2].second<<endl;*/
	
	}