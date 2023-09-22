#include<iostream>
#include<string>
using namespace std;
class information{
	string firstname;
	string lastname;
	int age;
	int roll_no;
	public:
	    void set_firstname(string first){
			firstname=first;
		}
		void set_lastname(string second){
			lastname=second;
		}
		void get_first_name(){
			cout<<"first name"<<" "<<firstname<<endl;
		}
		void get_last_name(){
			cout<<"last name"<<" "<<lastname;
		}
		void set_age(int ag){
			age=ag;
		}
		void get_age(){
			cout<<"age: "<<age<<endl;
		}
		void set_rollno(int roll){
			roll_no=roll;
		}
		void get_roll_no(){
			cout<<"roll no: "<<roll_no;
		}
		void print_name(){
			cout<<firstname<<" "<<lastname<<endl;
		}
		
};
int main(){
	information p1[5];
	for(int i=0; i<5; i++){
		string x,y;
		cout<<"enter age";
		int n;
		cin>>n;
		getline(cin,x);
		getline(cin,y);
		p1[i].set_firstname(x);
		p1[i].set_lastname(y);
	    p1[i].set_age(n);
	}
	for(int i=0; i<5; i++){
		p1[i].print_name();
		p1[i].get_age();
	}	
   return 0;
}
