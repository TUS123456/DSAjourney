#include<bits/stdc++.h>
using namespace std;
class solution{
	int x;
	int y;
	public:
		//parametrized constructo
	solution(int x,int y){
		this->x=x;
		this->y=y;
	cout<<endl<<"constructor working"<<endl;
	}
	solution(solution &s){
		this->x=s.x;
        this->y=s.y;		
		cout<<endl<<"copy constructor"<<endl;
	}
	
	void display(){
		cout<<this->x<<endl;
		cout<<this->y<<endl;
	}
	
};

main(){
	solution *s1 = new solution(56,79);
	solution *s2=new solution(*s1);

    //fuction call
    s2->display();
    
	
	s1->display();
}