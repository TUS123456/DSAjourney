#include<bits/stdc++.h>
using namespace std;
void print_vect(priority_queue<int,vector<int>,greater<int>> &arr){
	while(!arr.empty()){
		cout<<arr.top()<<" ";
		arr.pop();
	}
	cout<<endl;
}
int solve(vector<vector<int>>& matrix, int k) {
        priority_queue<int,vector<int>,greater<int>> pqr;
        vector<int> arr;
        int ans=0;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[i].size(); j++){
                pqr.push(matrix[i][j]);
            }
        }
        print_vect(pqr);
        k=k-1;
        while(k--){
            ans=pqr.top();
            pqr.pop();
            k--;
		}
        return ans;
}
main(){
    vector<vector<int>> mat={{1,5,9},{10,11,13},{12,13,15}};
    int k=8;
    
    cout<<solve(mat,k);
}