//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    bool isPalindrome(string str) {
        int start = 0;
        int end = str.length() - 1;
        while (start < end) {
            if (!isalnum(str[start])) start++;
            else if (!isalnum(str[end])) end--;
            else if (tolower(str[start]) != tolower(str[end])) return false;
            else {
                start++;
                end--;
            }
        }
        return true;
    }
};



//{ Driver Code Starts.

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        string s;
        cin >> s; // Read the string

        Solution ob; // Create an instance of Solution
        if (ob.isPalindrome(s)) {
            cout << "true"; // Print true if palindrome
        } else {
            cout << "false"; // Print false if not a palindrome
        }
        cout << "\n~\n"; // Print newline after each result
    }

    return 0;
}

// } Driver Code Ends