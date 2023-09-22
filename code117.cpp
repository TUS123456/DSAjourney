#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n;
	cout<<"enter decimal number";
	cin>>n;
	int i=0,ans=0;
	while(n != 0){
		int bit= n & 1;
		ans=ans+(bit*pow(10,i));
		n=n>>1;
		i++;
	}
	cout<<endl<<"binary number"<<" "<<ans;
}
