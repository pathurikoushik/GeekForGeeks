class Solution {
public:
    Node* sortedInsert(Node* head, int data) {
        Node* newNode = new Node(data);
        if (head == NULL) {
            newNode->next = newNode;
            return newNode;
        }
        if (data <= head->data) {
            Node* curr = head;
            while (curr->next != head) curr = curr->next;
            curr->next = newNode;
            newNode->next = head;
            return newNode;
        }
        Node* curr = head;
        while (curr->next != head && curr->next->data < data) {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        return head;
    }
};
