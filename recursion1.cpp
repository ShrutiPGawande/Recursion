/*Print numbers from 1 to n without the help of loops. You only need to complete the function printNos() that takes N as parameter and prints number from 1 to N recursively.

Don't print newline, it will be added by the driver code.

Examples

Input: n = 10
Output: 1 2 3 4 5 6 7 8 9 10
Input: n = 5
Output: 1 2 3 4 5
Expected Time Complexity: O(n).
Expected Auxiliary Space: O(n) (Recursive).*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    int i=1;
    void printNos(int N)
    {
        if(i>N)
        {
            return;
        }
        cout<<i<<" ";
        i++;
        printNos(N);
    }
};

//{ Driver Code Starts.
/* Driver program to test printNos */
int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    
    while(T--)
    {
        int N;
        
        //input N
        cin>>N;
        Solution ob;
        //calling printNos() function
        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends
