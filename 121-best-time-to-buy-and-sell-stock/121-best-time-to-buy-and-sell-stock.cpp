class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0;
        int n=prices.size();
        int arr[n];
        arr[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--)
        {
            if(prices[i]>=arr[i+1])
            {
               arr[i]=prices[i];  
            }
            else
            {
                arr[i]=arr[i+1];
            }
        }
        for(int i=0;i<n;i++)
        {
            res=max(res,(arr[i]-prices[i]));
        }
        return res;
    }
};