#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
	vector<pair<int,string> > mp={
	{1000000000,"billion"},{1000000,"million"},{1000,"thousand"},{100,"hundread"},{90,"ninty"},{80,"eighty"},{70,"seventy"},{60,"sixty"},{50,"fifty"},
	{40,"fourty"},{30,"thirty"},{20,"twenty"},{19,"ninteen"},{18,"eighteen"},{17,"seventeen"},{16,"sixteen"},{15,"fiteen"},{14,"fourteen"},{13,"thirteen"},
	{12,"twelve"},{11,"eleven"},{10,"ten"},{9,"nine"},{8,"eight"},{7,"seven"},{6,"six"},{5,"five"},{4,"four"},{3,"three"},{2,"two"},{1,"one"},{0,"zeor"}};
    string text(int num){
    	if(num == 0){
    		return "zero";
		}
    	for(auto it:mp){
			
			if(num >= it.first){
    			string a="";
			    if(num >=100){
					a=text(num / it.first)+" ";
    		    }
			    string b=" "+it.second;
			
			    string c="";
			    if(num % it.first  != 0){
				c=text(num % it.first);
			    }
	 	        return a+b+c;
			}
	 	}
	 	return 0;
    }
};
main(){
	
    int num;
	cin>>num;
    string ans;
	solution s;
	ans=s.text(num);	
    cout<<ans;
}
