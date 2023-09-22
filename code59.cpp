#include<bits/stdc++.h>
#include<map>
using namespace std;
int main(){
	map<int,string> m;
	m[1]="abc";
	m[2]="vdc";
	m.insert({5,"bgn"});
	m.insert({4,"ijn"});
	map<int,string> :: iterator it;
	for(it=m.begin(); it != m.end(); it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	return 0;
}
