#include<bits/stdc++.h>
using namespace std;
class heap{
	public:
		int size;
		int*  arr=new int[10001];
		
		heap(){
			size=0;
			
		}
		void insert(int val){
			size=size+1;
			arr[size]=val;
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
		int find_tagert_index(int &target){
			cout<<size<<endl;
			for(int i=1; i<=size; i++){
				if(target==arr[i]){
					cout<<i<<" "<<endl;
					return i;
				}
			}
		}
		void deletion_value(int target){
			int target_index=find_tagert_index(target);
			cout<<size;
			size=size-1;
			int last_vale=arr[size];
			size=size-1;
			insert(last_vale);
			
			
		}
		void dispaly_value(){
			for(int i=1; i<size; i++){
				cout<<arr[i]<<" "<<endl;
			}
		}
};
main(){
	heap hp;
	hp.insert(100);
	hp.insert(150);
	hp.insert(200);
	hp.insert(250);
	hp.insert(300);
	hp.insert(350);
	hp.insert(1000);
	hp.dispaly_value();
	hp.deletion_value(200);
	return 0;
}