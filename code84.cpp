#include<iostream>
using namespace std;
b(int& c){
cout<<c<<endl;	
}
a(int& a){
cout<<endl;
cout<<a<<endl;
b(a);
}
main(){
int i=5;
cout<<i;
a(i);
}
