#include<bits/stdc++.h>
#include<vector>
using namespace std;
void printvec(vector<int> &v){
for(int i=0; i<v.size(); i++){
	cout<<v[i]<<" ";
}
}
vector<int> take_input(vector<int> &v){
	int n;
	cout<<"enter size of vector";
	cin>>n;
	for(int i=0; i<n; i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	return v;
}
int main(){
    vector<int> myvec1;
    vector<int> myvec2;
    take_input(myvec1);
    take_input(myvec2);
    cout<<"before swap"<<endl;
	printvec(myvec1);
    cout<<endl;
    printvec(myvec2);
    cout<<endl;
    cout<<"after swap"<<endl;
    myvec1.swap(myvec2);
    printvec(myvec1);
    cout<<endl;
    printvec(myvec2);
  //  myvec1.sort(myvec2);
}
