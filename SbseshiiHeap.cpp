#include<iostream>
using namespace std;
class heap{
	public:
	int arr[20];
	int size;
	heap(){
		this->size=0;
	}
	
	void insertelement(int val){
		size=size+1;
		int index=size;
		arr[index]=val;
		
		while(index > 1){
			int prnt_index=index / 2;
			
			if(arr[index] > arr[prnt_index]){
				swap(arr[index],arr[prnt_index]);
				index=prnt_index;
			}
		}
    }
	
};


main(){
	
}