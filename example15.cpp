#include<iostream>
using namespace std;
int simpleArraySum(int ar[],int n) {
int sum;
for(int i=0; i<=n-1;i++){
    sum=sum+ar[i];
}
return(sum);
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<=n-1;i++){
        cin>>ar[i];
    }
    int result = simpleArraySum(ar,n);
    cout << result << "\n";
    return 0;
}
