#include<bits/stdc++.h>
using namespace std;
class heap{
	public:
		int arr[1001];
		int size;
		
		heap(){
			size=0;
		}
		
		void insert(int data){
			size=size+1;
			arr[size]=data;
			
			int index=size;
			while(index > 1){
				int parent_index=index/2;
				
				if(arr[index] > arr[parent_index]){
					swap(arr[index],arr[parent_index]);
					index=parent_index;
				}
				else{
					break;
				}
			}
		}
		void display(){
			for(int i=1; i<=size; i++){
				cout<<arr[i]<<" ";
			}
		}
		void heapify(int arr[],int size,int index){
			int largest=index;
			int leftindex=2*index;
			int rightindex=2*index+1;
			
			if(leftindex < size && arr[largest] < arr[leftindex]){
				largest=leftindex;
			}
			if(rightindex < size && arr[largest] < arr[rightindex]){
				largest=rightindex;
			}
			if(largest != index){
				swap(arr[largest],arr[index]);
				index=largest;
				heapify(arr,size,index);
			}
		}
};
int findKthsmallest(){
	int temp[]={3,11,6,9,4,12,2,8};
	heap hp;
	int k;
	cout<<"insert number of kth element";
	cin>>k;
	
	int count=0;
	while(count< k){
		hp.insert(temp[count]);
		count++;
	}
	hp.display();
	return 0;
}
main(){
//	heap hp;
//	hp.insert(3);
//	hp.insert(11);
//	hp.insert(6);
//	hp.insert(9);
//	hp.insert(4);
//	hp.insert(12);
//	hp.insert(2);
//	hp.insert(8);
	//hp.insert(13);
	
	cout<<findKthsmallest();
}