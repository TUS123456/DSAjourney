#include<bits/stdc++.h>
using namespace std;
void generate_subarray(vector<int> &arr,vector<vector<int>> &subarray,vector<int> outpur,int indii){
	if(indii >= arr.size()){
		subarray.push_back(outpur);
		return;
	}
	
	outpur.push_back(arr[indii]);
	//indii=indii+1;
	generate_subarray(arr,subarray,outpur,indii);
	//exlude
	indii=indii+1;
	generate_subarray(arr,subarray,outpur,indii);
	
}
main(){
	vector<int> arr={1,2,3};
    vector<int> outpur;
    vector<vector<int> > subarray;
    int i=0;
	generate_subarray(arr,subarray,outpur,i);
    for(int i=0; i< subarray.size(); i++){
    	for(int j=0; j<subarray[i].size(); j++){
    		cout<<subarray[i][j]<<" ";
		}
		cout<<endl;
	}
 }