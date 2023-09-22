#include<iostream>
using namespace std;
void say_digit(int n,string arr[10]){
	//base_case:
	if(n==0){
		return;
	}
    //processing:
	int digit=n%10;
    n=n/10;
    //function_call
    say_digit(n,arr);
    cout<<arr[digit]<<" ";
}
main(){
	int n;
    string arr[11]={"zero","one","two","three","four","five","six","seven","eight","nine","ten"};
	cout<<"enter number";
	cin>>n;
	say_digit(n,arr);
	return 0;	
}
