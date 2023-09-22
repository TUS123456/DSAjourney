#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> reverseArray(vector<int> v) {
int start=0;
int end=v.size()-1;
while(start < end){
swap(v[start++],v[end--]);
}
return v;
}
void displayvector(vector<int> v){
	int size=v.size();
	for(int i=0; i<size; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main() {
	int x;
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
		cin>>x;
		v.push_back(x);
	} 
	displayvector(v);
	reverseArray(v);
	displayvector(v);
	return 0;
}
