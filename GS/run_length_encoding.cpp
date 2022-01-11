// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
    string ans;
  for(int i=0;i<src.length();i++)
  {
      int count=1;
      while(i<src.length()-1 && src[i]==src[i+1])
      {
          count++;
          i++;
      }
      ans.push_back(src[i]);
      ans+=to_string(count);
  }
  return ans;
}     
 
