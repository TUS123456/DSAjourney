#include<bits/stdc++.h>
using namespace std;
string decodeString(string s) {
        stack<char> stk;
        for(int i=0; i<s.size(); i++){
            if(s[i] != ']'){
                stk.push(s[i]);
            }
            else{
                string current="";
                while(!stk.empty()&&stk.top() !='['){
                    current=stk.top()+current;
                    stk.pop();
                }
                stk.pop();
                string num="";
                while(!stk.empty() && isdigit(stk.top())){
                    num=stk.top()+num;
                    stk.pop();
                }
                int times=stoi(num);
                while(times>0){
                    for(int i=0; i<current.size(); i++){
                        stk.push(current[i]);
                    }
                times--;
                }
            }
        }
        cout<<stk.top()<<endl;
         s="";
        while(!stk.empty()){
             s=stk.top()+s;
             stk.pop();
        }
        return s;   
}
main(){
	string str="3";
	cout<<str.size()<<endl;
	cout<<decodeString(str);
}