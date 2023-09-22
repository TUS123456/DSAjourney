#include<bits/stdc++.h>
using namespace std;
main(){
	vector<char> an;
	vector<string> arr={"daisy", "rose", "hyacinthudgfik", "poppy"};
    vector<vector<char>> ans(arr.size(),vector<char>(arr[2].size()));
	for(int i=0; i<arr.size();i++){
		string temp=arr[i];
		for(int j=0; j<temp.size(); j++){
			ans[i][j]=arr[i][j];
		}
		
	}
	for (int col = 0; col < ans[2].size(); col++) { 
        for (int row = 0; row < ans.size(); row++) {
        	an.push_back(ans[row][col]);
		}
        cout << endl;
    }
}