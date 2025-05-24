class Solution {
public:
    Node* minValueNode(Node* node) {
        while (node->left) node = node->left;
        return node;
    }

    Node* deleteNode(Node* root, int X) {
        if (!root) return root;

        if (X < root->data) root->left = deleteNode(root->left, X);
        else if (X > root->data) root->right = deleteNode(root->right, X);
        else {
            if (!root->left && !root->right) {
                delete root;
                return NULL;
            } else if (!root->left) {
                Node* temp = root->right;
                delete root;
                return temp;
            } else if (!root->right) {
                Node* temp = root->left;
                delete root;
                return temp;
            } else {
                Node* temp = minValueNode(root->right);
                root->data = temp->data;
                root->right = deleteNode(root->right, temp->data);
            }
        }
        return root;
    }
};

