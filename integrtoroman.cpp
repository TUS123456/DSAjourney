#include<bits/stdc++.h>
using namespace std;
class solution{
	vector<pair<int,string>> mp={{1000,"M"},{500,"D"},{100,"C"},{50,"L"},{10,"X"},{5,"V"},{1,"I"}};
	public:
		string text(int num){
			if(num==0){
				return "0";
			}
			string a="";
			for(auto it : mp){
				if(num >= it.first){
					string a="";
					if(num >= 5){
						a=it.second+text(num/it.first);
					}
					string b="";
					if(num % it.first != 0){
						b= it.second +text(num%it.first);
					}
					return a+b;	
				}
			}
	    }
};
main(){
	int num ;
	cin>>num;
	solution s;
	cout<<s.text(num);
}