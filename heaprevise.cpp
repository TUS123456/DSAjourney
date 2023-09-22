#include<iostream>
using namespace std;
class heap{
	public:
		int arr[10001];
		int size;

    heap(){
   	this->arr[0]=-1;
   	this->size=0;
    }
    void insert_value(int value){
    	size=size+1;
    	int index=size;
    	arr[index]=value;
    	
    	
    	
    	while(index > 1){
    		int parent_index=index/2;
    		if(arr[index] > arr[parent_index]){
    			swap(arr[index],arr[parent_index]);
			}
			index=parent_index;
		}
	}
	void printvalue(){
		for(int i=1; i<=size; i++){
			cout<<arr[i]<<endl;
		}
	}
};

main(){
	heap hp;
	hp.insert_value(20);
	hp.insert_value(40);
	
	hp.printvalue();
}