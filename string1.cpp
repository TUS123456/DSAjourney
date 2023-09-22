#include<iostream>
using namespace std;
main(){
	string str="geeksforgeeks";
	int end=str.size()-1;
	int start=0;
	while(start <= end){
		if(str[start] != str[end]){
		    cout<<"not palindrome";
			break;			
		}
		start++;
		end--;
		
	}
}