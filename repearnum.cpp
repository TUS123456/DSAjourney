#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class solution{
	public:
		void solve(vector<int> &arr,int n){
			for(int i=0; i<=n; i++){
				if(abs(arr[i]-1)>=n){
					continue;
				}
				if((arr[i]-1) <= n){
					int index=abs(arr[i])-1;
				    arr[index] *= -1;
				}
				if(arr[i]<0){
					cout<<abs(arr[i])<<endl;
				}
				
		}
	}
	void solve2(vector<int> &arr,int size){
		for(int i=0; i<size; i++){
		    if(abs(arr[i])-1 == size){
				continue;
			}
			int indx=abs(arr[i])-1;
			arr[indx]*=-1;
		}
		int ans=size+1;
		for(int i=0; i<size; i++){
			if(arr[i] > 0){
				ans=i+1;
			}
		}
		cout<<endl;
		cout<<ans;
	}
	void print_array(vector<int> &arr){
		for(int i=0; i< arr.size(); i++){
			cout<<arr[i]<<" ";
		}
	}
	void print_duplicate(vector<int> &arr){
		int fl=0;
		int n=arr.size();
		cout<<endl;
		for(int i=0; i<n; i++){
			if(arr[arr[i]%n] >= n){
				if(arr[arr[i]%n] < 2*n){
					cout<<arr[i]*n<<" ";
				    fl=1;
				}
			}
			arr[arr[i]%n] += n;
		}
		cout<<endl;
		if(!fl){
			cout<<"-1"<<" ";
		}
		
	}
	void print_sol(vector<int> &arr){
	int n=arr.size();
	for (int i = 0; i < n; i++)
    {
        int index = arr[i] % n;
        arr[index] += n;
    }
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] / n) >= 2)
            cout << i << " ";
    }
   }
   void heapify(int arr[], int n,int i]){
   	int largest = i;
   	int left=2*i;
   	int right =2*i+1;
   	if(left < n && arr[left]> arr[largest]){
   		largest=left;
	   }
	if(left < n && arr[right]> arr[largest]){
   		largest=right;
	}
	
	if(largest != i){
		
	}
   }
};
int main(){
	solution ak;          //1, 3, 7, 5, 6, 2// 1, 6, 3, 1, 3, 6, 6 
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(6);
	arr.push_back(3);
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(6);
	arr.push_back(6);
	ak.print_array(arr);
	ak.solve2(arr,arr.size()-1);
	ak.print_duplicate(arr);
	ak.print_sol(arr);
	return 0;
   }
