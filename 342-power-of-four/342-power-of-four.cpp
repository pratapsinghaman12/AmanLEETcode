class Solution {
public:
    int num_bits(long n)
    {int count=0;
        while(n)
        {
count++;
            n/=2;
        }
     return count;
    }
    
    bool isPowerOfFour(int n) {
         if(n<0)
            return false;
     if((n&(n-1))!=0) return false;
        if(num_bits(n)%2==0)
            return false;
        return true;}
};