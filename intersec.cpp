//intersection of two array
#include<iostream>
#include<vector>
using namespace std;
void print_arra(vector<int> &arr){
    for(int x=0; x<arr.size();x++){
		cout<<(arr[x])<<" ";
    }
}
bool ele_pre_in_brr(int ele,vector<int> &brr){
	bool flag=0;
	for(int i=0; i<brr.size(); i++){
		if(brr[i]==ele){
			flag=1;
			brr[i] *=-1;
		}
	}
	return flag;
}
main(){
	vector<int> arr={34 45 73 38 39 62 64 69 56 51 59 63 52 71 68 70 58 41 37 48 40 72 44 60 47 46 54 43 35 49 55 67 65 75 74 36 61 66 57 53 42 50};
	vector<int> brr={52 62 103 44 70 67 92 77 56 69 101 57 105 49 66 60 40 58 104 80 75 95 71 89 86 73 84 97 88 90 93 48 63 74 79 45 41 98 81 87 76 55 85 43 64 96 72 59 83 107 46 61 50 54 102 82 78 68 51 53 42 91 47 106 99 100 65 94};
	vector<int> intersec;
	for(int i=0; i<arr.size(); i++){
		int ele=arr[i];
		if(ele_pre_in_brr(ele,brr)){
			intersec.push_back(ele);
		}
	}
	print_arra(intersec);
}