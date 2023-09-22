#include<iostream>
#include<limits.h>>
using namespace std;
main(){
	int sum=0;
	int arr[3][3]={{1,2,3},{4,5,6},{7,6,8}};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			sum=sum+arr[j][i];
			cout<<arr[j][i]<<" "<<endl;
		}
		cout<<sum<<" ";

	}
}