#include<bits/stdc++.h>
using namespace std;
main(){
	string str="abcde";
	sort(str.begin(),str.end());
	str=str+'a';
	int st=str[0];
	int stre = str[0] +1;
	cout<<stre<<endl;
	cout<<st<<endl;
	cout<<str;
}