class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice=0;
        int bob=0;
        int count=0;
        for(int i=0;i<colors.size();i++)
        {
            if(colors[i]=='A')
            {
                count++;
            }
            else
            {
                if(count>=3)
                    alice+=count-2;
                count=0;
            }
        }
         if(count>=3)
             alice+=count-2;
        count=0;
        for(int i=0;i<colors.size();i++)
        {
            if(colors[i]=='B')
            {
                count++;
            }
            else
            {
                if(count>=3)
                    bob+=count-2;
                count=0;
            }
        }
         if(count>=3)
             bob+=count-2;
         count=0;
        return alice>bob;
    }
};
