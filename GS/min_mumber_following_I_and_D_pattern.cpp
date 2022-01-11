// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string S){
        int curr_max = 0; 
      
        // Initialize last_entry (Keeps track for 
        // last printed digit) 
        int last_entry = 0; 
      
        int j; 
        string ans="";
        // Iterate over input array 
        for (int i=0; i<S.length(); i++) 
        { 
            // Initialize 'noOfNextD' to get count of 
            // next D's available 
            int noOfNextD = 0; 
      
            switch(S[i]) 
            { 
            case 'I': 
                // If letter is 'I' 
      
                // Calculate number of next consecutive D's 
                // available 
                j = i+1; 
                while (S[j] == 'D' && j < S.length()) 
                { 
                    noOfNextD++; 
                    j++; 
                } 
                    
                if (i==0) 
                { 
                    curr_max = noOfNextD + 2; 
      
                    // If 'I' is first letter, print incremented 
                    // sequence from 1 
                    ++last_entry;
                    ans+=('0'+last_entry);
                    ans+=('0'+curr_max);

                    // Set max digit reached 
                    last_entry = curr_max; 
                } 
                else
                { 
                    // If not first letter 
      
                    // Get next digit to print 
                    curr_max = curr_max + noOfNextD + 1; 
      
                    // Print digit for I 
                    last_entry = curr_max; 
                    ans+=('0'+last_entry);
                } 
      
                // For all next consecutive 'D' print  
                // decremented sequence 
                for (int k=0; k<noOfNextD; k++) 
                {   
                    --last_entry;
                    ans+=('0'+last_entry);
                    i++; 
                } 
                break; 
      
            // If letter is 'D' 
            case 'D': 
                if (i == 0) 
                { 
                    // If 'D' is first letter in sequence 
                    // Find number of Next D's available 
                    j = i+1; 
                    while (S[j] == 'D' && j < S.length()) 
                    { 
                        noOfNextD++; 
                        j++; 
                    } 
      
                    // Calculate first digit to print based on  
                    // number of consecutive D's 
                    curr_max = noOfNextD + 2; 
      
                    // Print twice for the first time 
                    ans+=('0'+curr_max);
                    ans+=('0'+(curr_max - 1));

      
                    // Store last entry 
                    last_entry = curr_max - 1; 
                } 
                else
                { 
                    // If current 'D' is not first letter 
      
                    // Decrement last_entry 
                    ans+=('0'+(last_entry - 1));
                    //cout << " " << last_entry - 1; 
                    last_entry--; 
                } 
                break; 
            } 
        } 
        return ans;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends