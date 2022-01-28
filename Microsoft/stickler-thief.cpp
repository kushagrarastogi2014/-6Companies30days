// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int nums[], int n)
    {
        int sum1=nums[0];
        int sum2=0;
        int sum3;
        for(int i=1;i<n;i++)
        {
            if(sum1>sum2)
                sum3=sum1;
            else
                sum3=sum2;
            sum1=sum2+nums[i];
            sum2=sum3;
        }
        if(sum1>sum2)
            return sum1;
        else
            return sum2;
    }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
