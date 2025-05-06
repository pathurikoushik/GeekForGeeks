//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
#define RANGE 255


// } Driver Code Ends

// User function Template for C++

class Solution {
  public:
    // Function to arrange all letters of a string in lexicographical
    // order using Counting Sort.
    string countSort(string arr) {
        int count[26] = {0}; 
        for (char c : arr) {
            count[c - 'a']++;
        }
        string s_str = "";
        for (int i = 0; i < 26; i++) {
            s_str.append(count[i], 'a' + i);
        }

        return s_str;
    }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr;
        cin>>arr;
        Solution obj;
        cout<<obj.countSort(arr)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends