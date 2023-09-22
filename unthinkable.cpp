#include<iostream>
#include<vector>
using namespace std;
class Node {
	public:
		int data;
		Node* left;
		Node* right;
		
	Node(int val){
		this->data=val;
		this->left=this->right=NULL;
	}
};
Node* build_tree(vector<int> &arr,int indii){
	
	
	Node *root=nullptr;
	
	if(indii < arr.size()){
		root=new Node(arr[indii]);
		
		root->left=build_tree(arr,2*indii+1);
		
		root->right=build_tree(arr,2*indii+2);
	}
	
	return root;
}


void print_tree(Node *root){
	if(root==NULL){
		return;
	}
	
	print_tree(root->left);
	cout<<root->data<<endl;
	print_tree(root->right);
}

/*int solution(Node *root,int &result){
	if(root==NULL){
		return 0;
	}
	
	int left=solution(root->left,result);
	int right=solution(root->right,result);
	
	
	int maxvalue=max(max(left,right)+root->data,root->data);
	
	int maxii=max(maxvalue,left+right+root->data);
	
	
	result=max(maxii,result);
	
	return maxvalue;
}*/
int findMaxUtil(Node* root, int& res)
{
    // Base Case
    if (root == NULL)
        return 0;
 
    // l and r store maximum path sum going through left and
    // right child of root respectively
    int l = findMaxUtil(root->left, res);
    int r = findMaxUtil(root->right, res);
 
    // Max path for parent call of root. This path must
    // include at-most one child of root
    int max_single
        = max(max(l, r) + root->data, root->data);
 
    // Max Top represents the sum when the Node under
    // consideration is the root of the maxsum path and no
    // ancestors of root are there in max sum path
    int max_top = max(max_single, l + r + root->data);
 
    res = max(res, max_top); // Store the Maximum Result.
 
    return max_single;
}
 
// Returns maximum path sum in tree with given root
int findMaxSum(Node* root)
{
    // Initialize result
    int res = INT_MIN;
 
    // Compute and return result
    findMaxUtil(root, res);
    return res;
}
main(){
	vector<int> arr={2,10,20,-1,-25,3,4};
	Node* root=build_tree(arr,0);
	print_tree(root);
	int result=findMaxSum(root);
	cout<<result;


}