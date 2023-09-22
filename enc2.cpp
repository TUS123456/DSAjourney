#include<iostream>
using namespace std;
class account{
	string fullname;
	string account_number;
	string aadhar_number;
	int balence;
	public:
	//constructor
	account(){
		this->balence=0;
	}
	//parametrized constructor
	account(string name,string aadhar,string account_number,int balance){
		this->fullname=name;
		this->account_number=account_number;
		this->balence=balance;
		this->aadhar_number=aadhar;
	}
	
	void display_information(){
		cout<<"account holder name :"<<fullname<<endl;
		cout<<"account number :"<<account_number<<endl;
		cout<<"addhar number :"<<aadhar_number<<endl;
		cout<<"balence :"<<balence<<endl;
	}
};
main(){
	string name;
	cout<<"enter name"<<endl;
	getline(cin,name);
	
	string number;
	cout<<"account number"<<endl;
	getline(cin,number);
    
	string addharnumber;
	cout<<"addhar number"<<endl;
	getline(cin,addharnumber);
	
	int balence;
	cout<<"enter amount"<<endl;
	cin>>balence;
	
	
	account act(name,addharnumber,number,balence);
	
	cout<<"your detail....."<<endl;
	act.display_information();


   cout<<"you want to transfer your money to another account"<<endl;
   bool option;
   cin>>option;
   if(option){
   	cout<<"you need to perform opreation"<<endl;
   }
   else{
   	cout<<"thanku"<<endl;
   }
	
}