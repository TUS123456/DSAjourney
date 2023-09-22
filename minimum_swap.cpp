#include<iostream>
using namespace std;
main(){
	string str1="abab";
    string str2="aabb";
    int cost=0;
    for(int i=0; i<str1.length(); i++){
    	if(str1[i] != str2[i]){
    		if(i < str1.length()-1 && str1[i+1] != str2[i+1]){
    			swap(str1[i],str1[i+1]);
    			cost++;
			}
			else{
			str1[i]=str2[i];
			cost++;
		    }
	    }
	}
	cout<<cost;
}