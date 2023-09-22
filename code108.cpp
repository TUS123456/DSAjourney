#include<iostream> 
using namespace std;
void pascal_triangle(int n){
	int arr[n][n];
    for(int line=0; line < n; line++){
        for(int i=0; i<= line; i++){
            if(i==line || i==0){
                arr[line][i]=1;
            }
            else{
                arr[line][i]=arr[line-1][i-1]+arr[line-1][i];
            }
            cout<<arr[line][i]<<" "; 
        }
        cout<<endl;
    }
}
main(){
    int n;
    cout<<"no of line";
    cin>>n;
    pascal_triangle(n);
}
