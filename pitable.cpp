#include<bits/stdc++.h>
using namespace std;
main(){
	map<char,int> map;
	string txt="ababd";
	
	int len=txt.length();
	
	
	int le=0;
	int first_time=0;
	map[txt[0]]=0;
	int i=1;
	while(i < len){
		if(map.find(txt[i])==map.end()){
			le++;
			map[txt[i]]=le;
			i++;
		}
		else{
			if(le !=0){
				le=0;
			}
			else{
				map[txt[i]]=0;
			}
			i++;
		}
		
	}
	for(int i=0; i<map.size(); i++){
		cout<<map[i]<<" ";
	}
	
	
	
}
