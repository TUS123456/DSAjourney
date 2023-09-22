#include<stdio.h>
int main() {
    int size;
    scanf("%d",&size);
    int i,temp;
    int arr[size];  
    for(i=0;i<=size-1;i++){
        scanf("%d",&arr[i]);
    }
    i=0;
    for(i=size-1; i >= 0; i--){
        printf("\n %d",arr[i]);
    }
}

