class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int n=p.size();
        
        int ans=0;
        
        for(int i=1;i<n;i++)
        {
            if(p[i]>p[i-1])
            {
                ans=ans+ p[i]-p[i-1]; 
            }
           
        }
        return ans;
        
    }
};