#include<iostream>
using namespace std;
int atoi(string str) {
        int num=0;
        for(int i=0; i<str.size(); i++){
            bool res=isalpha(str[i]);
            if(res==0){
            int digit=str[i]-'0';
            num=num*10 + digit;
            }
            else{
                num=-1;
                break;
            }
        }
        if(num==-1){
        	return -1;
		}
		else{
			return num;
		}
        //Your code here
}
main(){
	string st="123";
	atoi(st);
}