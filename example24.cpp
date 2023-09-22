#include<iostream>
using namespace std;
void sum();
void add();
int main(){
    sum();
    return 0;
}
void sum(){
	add();
}
void add(){
	cout<<"in add";
}
