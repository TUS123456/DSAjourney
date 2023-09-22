#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node *nxt=NULL;
    node(int data){
    	this->data=data;
    	this->nxt=NULL;
	}
};
node *head=NULL;
node* insert_node(node *head){
	int val;
	cout<<"insert value";
	cin>>val;
	node *temp=new node(val);
	if(head==NULL){
		head=temp;
	}
	else{
		node *temp2=head;
		while(temp2->nxt != NULL){
			temp2=temp2->nxt;
		}
		temp2->nxt=temp;
	}
	return head;
}
void controller(){
	int count,i=0;
	cout<<"how many you want insert"<<endl;
	cin>>count;
	while(i <= count){
		head=insert_node(head);
		i++;
	}
	
}
void takedatainvector(vector<int> &arr){
	while(head->nxt != NULL){
		arr.push_back(head->data);
		head=head->nxt;
	}
	arr.push_back(head->data);
}
void print(vector<int> &arr){
	int n= arr.size();
	int i=0;
	while(i< n){
		cout<<arr[i]<<" ";
		i++;
	}
}
int count_number(vector<int> &arr,int x){
		cout<<"in count";
		int n= arr.size();
		int count=0;
		int i=0;
		while(i<n){
			if(arr[i]< x){
				count++;
			}
		}
		cout<<endl<<count;
}
int search_element(vector<int> &arr,int x){
	cout<<"inserach";
	int n=arr.size();
	int i=0;
	while(i < n){
		if(arr[i]==x){
			return i;
		}
	}
	cout<<endl<<i;
}
vector<int> solution(vector<int> &arr,int x){
	cout<<"insolu";
	int count=count_number(arr,x);
    int element_indii=search_element(arr,x);
    cout<<count<<" "<<element_indii;
}
main(){
	vector<int> arr;
	int x=3;
	controller();
	takedatainvector(arr);
	
	print(arr);
	solution(arr,x);
}