#include<bits/stdc++.h>
using namespace std;

class heap{
	public:
	int arr[1001];
	int size;
	heap(){
		size=0;
	}
	
	void insert(int val){
        size=size+1;
        int index=size;
        arr[index]=val;

        while(index > 1){
            int parent=index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index=parent;
            }
            else{
                return;
            }
        }
    }
	
	void delete_(){
	//root element swap krdia last node se and size--
	swap(arr[1],arr[size]);
	size--;
	//palace root element its correct place
	int index=1;
	while(index < 1){
		int left_index=2*index;
		int right_index=2*index+1;
		
		int largest=index;
		
		if(left_index < size && arr[left_index] > arr[index]){
			largest=left_index;
		}
		
		if(right_idex < size && arr[right_index] > arr[index]){
			largest=right_index;
		}
		
		if(largest==index){
			return;
		}
		else{
			swap(arr[largest],arr[index]);
			index=largest;
		}
	}
}
	
};