// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> possibleWords(int a[], int N)
    {
        unordered_map<int,vector<string>> m;
         m[2] = {"a", "b", "c"};
         m[3] = {"d", "e", "f"};
         m[4] = {"g", "h", "i"};
         m[5] = {"j", "k", "l"};
         m[6] = {"m", "n", "o"};
         m[7] = {"p", "q", "r", "s"};
         m[8] = {"t", "u", "v"};
         m[9] = {"w", "x", "y", "z"};
         vector<string> first=m[a[0]];
         for(int i=1;i<N;i++)
         {
             vector<string> second=m[a[i]];
             vector<string> ans;
             for(auto f:first)
             {
                 for(auto s:second)
                 ans.push_back(f+s);
             }
             first=ans;
         }
         return first;
    }
};


// { Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}  // } Driver Code Ends