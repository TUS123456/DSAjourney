#include<bits/stdc++.h>
using namespace std;
void solve(int *arr){
	cout<<&arr<<endl;
	cout<<arr<<endl;
}
main(){
	int arr[4]={12,14,16,18};
	int *ptr=arr;
	ptr=ptr+1;
	//cout<<*ptr;
	//cout<<arr;
	//cout<<arr<<endl;
	//solve(arr);
    char ch[20]="tushar";
    char *pt=ch;
    cout<<*pt<<endl;
}