#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int get_length(char str[]){
		int count=0;
		for(int i=0; str[i] != '\0'; i++){
		count++;
	}
	return count;
}
void reverse_string(char str[],int e){
	int s=0;
	int end=e-1;
	while(s < end){
		swap(str[s++],str[end--]);
	}
}
main(){
	char str[10]="tushar";
	cout<<str;
	int len=get_length(str);
    cout<<"\n"<<len;
    reverse_string(str,len);
    cout<<"\n"<<str;
}
