#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
void print_array(vector<int> &arr){
	int size=arr.size();
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
}
void print_value(pair<int,int> &x){
	cout<<x.first<<" "<<x.second<<endl;
}
void array_sort(vector<int> arr){
	int size=arr.size();
	sort(arr.begin(), arr.end());
	print_array(arr);
}
void solution(vector<int> &arr){
	int n=arr.size();
    //print_value(n);
    pair<int,int> p;
    array_sort(arr);
    p.first=arr.begin();
    p.second=arr.end();
    print_value(p);
}
int main(){
   int n;
   cin>>n;
   vector<int> arr;
   for(int i=0; i<n;i++){
   	int x;
   	cin>>x;
   	arr.push_back(x);
}
    solution(arr);
}
