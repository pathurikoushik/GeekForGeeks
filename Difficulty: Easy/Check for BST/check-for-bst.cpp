class Solution{
public:
    Node* prev = NULL;
        
    bool isBST(Node* root) {
        return isBSTUtil(root);
    }
        
    bool isBSTUtil(Node* node) {
        if(node == NULL) return true;
            
        if(!isBSTUtil(node->left)) return false;
            
        if(prev != NULL && node-> data <= prev -> data) return false;
            
        prev = node;
            
        return isBSTUtil(node -> right);
    }
};
