class Solution {
public:
    int nthUglyNumber(int n) {
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        vector<int> v(n);
        v[0]=1;
        int q=0,w=0,e=0;
        for(int i=1;i<n;i++)
        {
            v[i]=min(v[q]*2,min(v[w]*3,v[e]*5));
            if(v[i]==v[q]*2)
                q++;
            if(v[i]==v[w]*3)
                w++;
            if(v[i]==v[e]*5)
                e++;
        }
        return v[n-1];
    }
};