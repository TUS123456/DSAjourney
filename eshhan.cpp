#include<iostream>
using namespace std;
main(){
	char *ptr;
	char str[]="abcdefg";
	ptr=str;
	ptr=ptr+5;
	cout<<ptr;
}