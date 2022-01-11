#include<bits/stdc++.h>
using namespace std;

int lastposition(int n,int m,int k)
{
    if(m<=n-k+1)
    return m+k-1;
    m=m-(n-k+1);
    if(m%n==0)
    return n;
    else
    return m%n;
}
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    cout<< lastposition(n,m,k)<<endl;
}