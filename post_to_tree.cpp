#include<bits/stdc++.h>
using namespace std;

class Node{
        public:
        int data;
        Node* left;
        Node* right;

        Node(int data) {
                this->data = data;
                this->left = NULL;     
                this->right = NULL;  
        }
};

int findPosition(vector<int> arr, int n, int element) {
        for(int i=0; i<n; i++) {
                if(arr[i] == element) {
                        return i;
                }
        }
        return -1;
}
Node* solution(vector<int> &inorder,vector<int> &postorder,int &postindex,int size,int in_str,int inor_end){
	if(postindex < 0 || in_str > inor_end){
        return NULL;
    }
	int ele=postorder[postindex];
    //cout<<ele<<endl;
	postindex--;
    int pos=findPosition(inorder,size,ele);
    Node* root=new Node(ele);
    cout<<root->data<<endl;
    
    root->right=solution(inorder,postorder,postindex,size,pos+1,inor_end);
    root->left=solution(inorder,postorder,postindex,size,in_str,pos-1);

    return root;
	
}
main(){
	    vector<int> inorder = {9,3,15,20,7};
        vector<int> postorder = {9,15,7,20,3};
        int size=inorder.size();
        int postindex=size-1;
	    int in_start=0;
        int in_end=size-1;
		cout<<"size: "<<size<<endl;
        cout<<"postindex:"<<postindex<<endl;
        
        Node *root=solution(inorder,postorder,postindex,size,in_start,in_end);
}