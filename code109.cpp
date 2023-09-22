#include<iostream>
#include<map>
using namespace std;
main(){
	map<int,int> m;
	map<int,int> :: iterator it;
	for(int i=0; i < 5; i++){
		m[i]=i*i;
	}
   for(it=m.begin(); it != m.end(); it++){
   	cout<<it->first<<" "<<it->second<<endl;
   }
}
