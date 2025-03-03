#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends

#User function Template for python3


class Solution:

    def swap(self, a, b):
        #code here
        a,b = b,a
        print(a, b)



#{ 
 # Driver Code Starts.


    

def main():
    t=int(input())
    while(t>0):
        a = int(input())
        b = int(input())
        oj = Solution();
        oj.swap(a, b)
        
        t-=1

        print("~")
if __name__ == "__main__": 
    main()
# } Driver Code Ends