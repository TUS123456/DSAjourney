#include<iostream>
#include<utility>
using namespace std;
void display(pair<string,int> v){
    cout<<v.first<<" "<<v.second<<endl;
}
int main(){
     pair<int,int> p;
     p=make_pair(3,4);
     int a,b;
     tie(a,b)=p;
     cout<<a<<" "<<b<<endl;
     
}   
