// Function to push an integer into the stack.

/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack ::push(int x) {
    // Your Code
    if(top == 999) {
        return;
    }
    arr[++top] = x;
}

// Function to remove an item from top of the stack.
int MyStack ::pop() {
    // Your Code
    if(top == -1) {
        return -1;
    }
    return arr[top--];
}