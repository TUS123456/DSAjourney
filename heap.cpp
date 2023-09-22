#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void print(){
    	for(int i=1; i<=size; i++){
    		cout<<arr[i]<<" ";
		}
		cout<<endl;
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
    
    
    void delete_from_heap(){
    	if(size==0){
    		return;
		}
		//first index pe elemenet daal diya h
		
		arr[1]=arr[size];
		//last node access n ho kisi se
		
		size--;
		//place first node its correct position
		
		
		int i=1;
		
		while(i < size){
			int left_index=2*i;
			int right_index=2*i+1;
			
			if(left_index<size && arr[i] < arr[left_index]){
				swap(arr[left_index],arr[i]);
				i=left_index;
			}
            if(right_index<size && arr[i] < arr[right_index]){
				swap(arr[right_index],arr[i]);
				i=right_index;
			}
			else{
				return;
			}			
		}
		
		
    	
	}
};


main()
{
	heap hp;
	hp.insert(55);
	hp.insert(54);
	hp.insert(53);
	hp.insert(50);
	hp.insert(52);
	hp.print();
	hp.delete_from_heap();
	hp.print();
}
