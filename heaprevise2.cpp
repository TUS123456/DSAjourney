#include<bits/stdc++.h>
using namespace std;
class heap{
	public:
		int arr[100];
		int size;
	heap()	{
		this->arr[0]=-1;
		this->size=0;
	}
	void insert_value(int value){
		size=size+1;
		int index=size;
		arr[index]=value;
		
		
		while(index > 1){
			int parentindex=index / 2;
			
			if(arr[parentindex] < arr[index]){
				swap(arr[parentindex],arr[index]);
				index=parentindex;
			}
			else{
				return;
			}
		}
	}
	void print_heap(){
		for(int i=1;i <size; i++){
			cout<<arr[i]<<" ";
		} 
	}
	
	void delete_value(){
		arr[1]=arr[size];
		size=size-1;
		int index = 1;
		
		while(index < size){
			int largest=index;
			int left=2*index;
			int right=2*index+1;
			
			if(left <= size && arr[left] > arr[largest]){
				largest=left;
			}
			if(right <= size && arr[right] > arr[largest]){
				largest=right;
			}
			
			if(largest == index){
				break;
			}
			else{
				swap(arr[largest],arr[index]);
				index=largest;
			}
		}
	}
	
	void heapify(int index){
		int largest=index;
		int left=2*index;
		int right=2*index+1;
			
			if(left <= size && arr[left] > arr[largest]){
				largest=left;
			}
			if(right <= size && arr[right] > arr[largest]){
				largest=right;
			}
			if(largest != index){
				swap(arr[largest],arr[index]);
				heapify(largest);
			}
	}
	
	void heap_sort() {
    int originalSize = size;

    for (int i = originalSize / 2; i > 0; i--) {
        heapify(i);
    }

    for (int i = originalSize; i > 0; i--) {
        swap(arr[1], arr[i]);
        size--;
        heapify(1);
    }
    this->size = originalSize; 
    }

};


main(){
	heap hp;
	hp.insert_value(6);
	hp.insert_value(24);
	hp.insert_value(34);
	hp.insert_value(44);
	hp.insert_value(64);
	hp.insert_value(74);
	hp.insert_value(84);
	hp.print_heap();
	
	hp.heap_sort();
	cout<<endl;
	hp.print_heap();
}