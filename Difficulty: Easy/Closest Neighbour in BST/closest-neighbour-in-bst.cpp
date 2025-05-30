class Solution {
public:
    int ans = INT_MIN;

    int findMaxFork(Node* root, int k) {
        findMax(root, k);
        return ans == INT_MIN ? -1 : ans;
    }

    void findMax(Node* node, int k) {
        if (!node) return;

        findMax(node->left, k);

        if (node->data <= k && node->data > ans) {
            ans = node->data;
        }

        findMax(node->right, k);
    }
};


