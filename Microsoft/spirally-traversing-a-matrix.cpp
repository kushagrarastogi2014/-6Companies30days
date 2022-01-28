// { Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        if(r==0)
        return ans;
        int rowbegin=0;
        int rowend=r-1;
        int colbegin=0;
        int colend=c-1;
        while(rowbegin<=rowend && colbegin<=colend)
        {
            for(int i=colbegin;i<=colend;i++)
            {
                ans.push_back(matrix[rowbegin][i]);
            }
            rowbegin++;
            for(int i=rowbegin;i<=rowend;i++)
            {
                ans.push_back(matrix[i][colend]);
            }
            colend--;
            if(rowbegin<=rowend)
            {
                for(int i=colend;i>=colbegin;i--)
                ans.push_back(matrix[rowend][i]);
            }
            rowend--;
            if(colbegin<=colend)
            {
                for(int i=rowend;i>=rowbegin;i--)
                {
                    ans.push_back(matrix[i][colbegin]);
                }
            }
            colbegin++;
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
