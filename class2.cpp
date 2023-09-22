#include<bits/stdc++.h>
using namespace std;
class student{
	public:
		int x;
		int y;
		void print_value(){
			cout<<endl;
			cout<<this->x<<" "<<this->y;
			
			
		}
    private:
		student(student &s){
		this->x=s.x;
		this->y=s.y;
		cout<<"copy constructor";
	}
	public:
	student(int val,int val2){
		this->x=val;
		this->y=val2;
	cout<<"parametrized contructor";
	}
};
int main(){
	student *s= new student(78,70);
    (s)->print_value();
    student *s1=new student(*s);
    s1->print_value();
    return 0;
}