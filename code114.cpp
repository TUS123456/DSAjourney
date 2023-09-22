#include<iostream>
#include<math.h>
using namespace std;
main(){
	int n;
	cout<<"enter binary number";
	cin>>n;
	int ans=0;
	int bit,i=0;
	while(n != 0){
		bit= n % 10;
		if( bit == 1){
			ans = ans + pow(2,i);
		}
		n= n / 10;
		i++; 
	}
	cout<<endl<<ans;
	
}
