//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        vector<int>v;
        while(!s.empty())
        {
            v.push_back(s.top());
            s.pop();
        }
        int n =sizeOfStack;
        if(n%2==0)
        {
            int t=n/2;
            for(int i=n-1;i>=0;i--)
            {
                if(i==t)
                 continue;
                s.push(v[i]);
            }
            
        }
        else{
            int t=ceil(n/2);
            for(int i=n-1;i>=0;i--)
            {
                if(i==t)
                {
                    continue;
                }
                s.push(v[i]);
            }
        }
        while(!s.empty())
        {
            int p=s.top();
            s.pop();
            cout<<p<<" ";
            
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends