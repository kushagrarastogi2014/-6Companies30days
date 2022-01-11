class Solution {
public:
    int numDecodings(string s) {
        vector<int> v(s.size()+1,-1);
        return fun(s,s.size(),v);
    }
    int fun(string s,int size,vector<int> &v)
    {
        if(s[0]=='0')
            return 0;
        if(size==0||size==1)
            return 1;
        if(v[size]!=-1)
            return v[size];
        int ans=0;
        if(s[size-1]>'0')
            ans=fun(s,size-1,v);
        if(s[size-2]=='1'||s[size-2]=='2'&&s[size-1]<'7')
            ans+=fun(s,size-2,v);
        return v[size]=ans;
    }
};