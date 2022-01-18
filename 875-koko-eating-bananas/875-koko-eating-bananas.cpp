class Solution {
public:
    long long int give_meh(vector<int>& piles,int n)
    {
        long long int count=0;
        for(auto x:piles)
        {
            if(x<=n)
            {
                count++;
            }
            else
            {
                if(x%n==0)
                {
                    count=count+(x/n);
                }
                else
                {
                    count=count+(x/n)+1;
                }
                
            }
        }
        return count;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=0;
        for(auto x:piles)
        {
            n=max(n,x);
        }

        long long int low=1;
        long long int high=n;
         int res=INT_MAX;
        while(low<=high)
        {
            long long int mid=low+(high-low)/2;
            long long int faltu= give_meh(piles,mid);
            if(faltu<=h)
            {
                high=mid-1;
               res=mid;
            }
            else
            {
                low=mid+1;
            }
            
        }
        return res;
    }
};