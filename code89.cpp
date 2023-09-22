#include<iostream>
using namespace std;
// function declaration
inline int get_max(int& x,int& y){
return (x>y)? x:y;
}
//function declartion
void incre(int& x,int& y){
	x+=2;
	y+=3; 
	cout<<x<<" "<<y<<endl;
}
//main function
int main(){
	int x,y;
	cin>>x>>y;
	cout<<get_max(x,y)<<endl;
    incre(x,y);
    cout<<get_max(x,y)<<endl;
    return 0;
}
