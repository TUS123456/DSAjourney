#include<stdio.h>
#include<iostream>
using namespace std;
class stdudent{
	public:
	int roll;
	char name[20];
	int age;
	friend istream& operator>>(istream&,stdudent&);
 };
 istream& operator>>(istream &din,stdudent &s){
 	return din >>s.roll>>s.name[20]>>s.age;
 }
int main(){
	stdudent s;
	printf("enter data");
	cin>>s.roll>>s.name[20]>>s.age;
}
