#include<iostream> 
using namespace std;
 
int main() {
    int N;
    cout<<"enter size";
    cin>>N;
    int k;
    cout<<"enter step";
    cin>>k;
    int arr[N];
    for(int i=0; i<N; i++){ 
        cin>>arr[i]; 
    }
    for(int i=k; i<N; i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<k; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}