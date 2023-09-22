#include<iostream>
#include<string.h>
using namespace std;
class student{
	private:
	int roll;
	std::string name[20];
	int age;
	public:
	  void set_data(int R,std::string NAME[20],int umar){
	  	roll=R;
	    name[20]=NAME[20];
	  	age=umar;
	  }
	  void show_data(){
	  	cout<<roll<<" "<<" "<<age;
	    cout<<name;
	  }
};
int main(){
	student s;
	string s1[20];
	strcpy(s1,"tushar");
	s.set_data(28598,s1,18);
    return 0;
}
