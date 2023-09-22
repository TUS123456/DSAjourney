#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
	int x;
	int y;
	solution(int x,int y){
		this->x=x;
		this->y=y;
	}
	void operator<<(solution &obj){
		cout<<obj.x<<endl;
		cout<<obj.y<<endl;
	}
};
main(){
	solution *obj=new solution(6,7);
	cout<<(obj);
	
	
	
}