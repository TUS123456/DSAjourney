#include<iostream>
#include<math.h>
using namespace std;
inline int cube(int*);
int main(){
    int x;
    cin>>x;
    int ans=cube(&x);
	cout<<ans;
	return 0;
}
inline int cube(int *p){
	int temp;
	temp=pow(*p,3);
	return(temp);
}
