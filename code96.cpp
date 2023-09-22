#include<iostream>
using namespace std;
void reverse(string& str,int start,int end){
	if(start > end){
		return ;
	}
	swap(str[start],str[end]);
	start++;
	end--;
	reverse(str,start,end);
}
main(){
	string str="TUSHAR";
    int start=0;
    int end=str.length()-1;
	cout<<str;
    reverse(str,start,end);
    cout<<endl<<str;
    
}

