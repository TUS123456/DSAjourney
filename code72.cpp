#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
using namespace std;
main(){
    vector<int> v;
    v.push_back(4);
    v.push_back(9);
    v.push_back(1);
	int size=v.size();
	sort(v.begin(), v.end(), smaller<int>());
	for(int i=0; i<size; i++){
		cout<<v[i]<<" ";
	}
}

