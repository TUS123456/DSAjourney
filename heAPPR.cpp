#include<iostream>
using namespace std;
class heap{
	public:
		int arr[100001];
		int size;
		
	heap(){
		this->arr[0]=-1; 
		this->size=0;
	}
	void insert_element(int data){
		size=size+1;
		int index=size;
		this->arr[index]=data;
		
		while(index > 1){
			int parent = index /2;
			if(arr[parent] < arr[index]){
				swap(arr[parent],arr[index]);
				index=parent;
			}
			else{
				return;
			}
		}
		
	}
};
main(){
	
}