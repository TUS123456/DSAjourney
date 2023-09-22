#include<bits/stdc++.h>
using namespace std;
void show_data(vector<int> v){
    //cout<<v.size();
	for(int i=0; i<v.size(); i++)
    {
    	cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> v;
	int n;
	cout<<"enter vector size";
    cin>>n;
    for(int i=0; i<n; i++){
    	int x;
    	cin>>x;
    	v.push_back(x);
	}
    show_data(v);
}
