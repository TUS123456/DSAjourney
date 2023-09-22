#include<bits/stdc++.h>
using namespace std;
//int main()
//{
//	int a=0,b=1;
//	cout<<a<<endl;
//	cout<<b<<endl;
//	int c=0;
//	for(int i=0;i<8;i++)
//	{
//		cout<<a+b<<endl;
//		
//		a=b;
//		b=a+b;
//	}
//}
void fib(int &count,long long start,long long end){
	cout<<count<<endl;
	if(count > 40){
		return;
	}
	long long temp=start+end;
	//cout<<temp<<endl;
	cout<<count<<endl;
	count++;
	
	fib(count,end,temp);
}
main(){
	long long start=0;
	long long end=1;
	int count=0;
	fib(count,start,end);
}