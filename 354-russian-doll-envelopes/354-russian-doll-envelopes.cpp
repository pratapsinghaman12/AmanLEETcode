class Solution {
public:
    
    int myceil(int arr[],int l,int r,int x)
    {
        while(l<r)
        {
            int m=l+(r-l)/2;
            if(arr[m]>=x)
            {
               r=m; 
            }
            else
            {
               l=m+1; 
            }
        }
        return r;
    }
    int maxEnvelopes(vector<vector<int>>& E) {
        
        int n=E.size();
        
       sort(E.begin(), E.end(), [](const vector<int> &a, const vector<int> &b)
             {
                 if (a[0] < b[0])
                     return true;
                 if (a[0] == b[0])
                     return a[1] > b[1];
                 return false;
             });
        
        int v[n];
        
       v[0]=E[0][1];
        int len=1;
        
        
        for(int i=1;i<n;i++)
        {
           
                if(E[i][1]>v[len-1])
                {
                   v[len]=E[i][1];
                    len++;
                }
                else
                {
                    int index=myceil(v,0,len-1,E[i][1]);
                        v[index]=E[i][1];
                }
            
        }
        return len;
    }
};