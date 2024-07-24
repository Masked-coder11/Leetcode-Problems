class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    bool inorder(Node* root, Node* &prev){
        if(root==NULL) return true;
        
        bool left= inorder(root->left, prev);
        if(left==false) return false;
        
        if(prev==NULL || root->data > prev->data){
            prev=root;
        }
        else{
            return false;
        }
        
        bool right= inorder(root->right, prev);
        if(right==false) return false;
        
        return true;
    }
    
    bool isBST(Node* root) {
        // Your code here
        Node* prev=NULL;
        return inorder(root, prev);
    }
};
