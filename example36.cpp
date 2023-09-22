#include<bits/stdc++.h>
#include<queue>
#include<iostream>
#include<stack>
#include<array>
using namespace std;
int main(){
    priority_queue <int> maxi;
    priority_queue <int, vector<int>,greater<int> > mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(8);
    maxi.push(9);
    maxi.push(6);
    int ele=maxi.top();
    maxi.pop();
    cout<<ele;
    cout<<endl;
    int n=maxi.size();
    cout<<"queue size->"<<maxi.size()<<endl;
    for(int i=0; i<n; i++)
   {
       cout<<maxi.top()<<" ";
       maxi.pop();
   }
    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(8);
    mini.push(9);
    mini.push(6); 
    cout<<endl;
    ele=mini.top();
    cout<<ele;
    mini.pop();
    cout<<endl;
    n=mini.size();
    cout<<"queue size->"<<mini.size()<<endl;
    for(int i=0; i<n; i++)
    {
       cout<<mini.top()<<" ";
       mini.pop();
    }
}
