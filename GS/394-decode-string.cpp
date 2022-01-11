class Solution {
public:
    string repeat(string s,int repeattimes)
    {
        string result="";
        for(int i=0;i<repeattimes;i++)
            result+=s;
        return result;
    }
    string decodeString(string s) {
        int i=0;
        while(i<s.size())
        {
            if(s[i]!=']')
            {
                i++;
                continue;
            }
            int j=i;
            while(s[j]!='[')
                j--;
            string repeati=s.substr(j+1,i-j-1);
            int k=j;
            j--;
            while(j>0 &&(isdigit(s[j])))
                j--;
            if(j!=0)
                j++;
            int repeattimes=stoi(s.substr(j,k-j));
            s.replace(j,i-j+1,repeat(repeati,repeattimes));
            i=j+repeati.size()*repeattimes;
        }
        return s;
    }
};