//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function Template for C++

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        n /= 10;  // Remove the last digit
        count++;  // Increase the count
    }
    return count;
}


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        cout << countDigits(n);
        cout << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends