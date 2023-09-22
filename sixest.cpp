#include<iostream>
using namespace std;
class node{
	char data;
	unsigned freq;
	node* left;
	node* right;
	
	node(char dat,unsigned fre){
		this->data=dat;
		this->freq=fre;
	}
};
main(){
	string s="abcdef";
	cout<<s.size();
	
}
