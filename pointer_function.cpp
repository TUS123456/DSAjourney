#include<bits/stdc++.h>
using namespace std;
int solve2(int *ptr){
	cout<<*ptr<<endl;
	cout<<&ptr<<endl;
	*ptr=*ptr+60;
}
main(){
	int arr[10]={1,2,3,45,5};
	int num=40;
	cout<<&num<<endl;
	solve2(&num);
	cout<<sizeof(&num)<<endl;
	cout<<num<<endl;
}