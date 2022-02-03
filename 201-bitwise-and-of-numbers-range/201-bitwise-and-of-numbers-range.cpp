class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        long mask=(1L<<31);
        int res=0;
        while(mask)
        {
            if((mask&left)==(mask&right))
            {
                if(mask&left)
                {
                    res+=mask;
                }
                
                mask>>=1;
            }
            else
            {
                break;
            }
        }
        return res;
    }
};