#include<iostream>
using namespace std;
main(){
	nt main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
    int height = height(root);
    cout<<root;
}
