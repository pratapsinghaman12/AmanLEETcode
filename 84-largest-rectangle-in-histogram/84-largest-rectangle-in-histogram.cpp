class Solution {
public:
    
    
    
    
    vector<int> aman_nse(vector<int> &arr,int n)
    {
         vector<int>nse(n,n);
          stack<int>st;
         st.push(n-1);
         for(int i=n-2;i>=0;i--)
         {
             while(!st.empty()&&arr[i]<=arr[st.top()])
             {
                 st.pop();
             }
             if(!st.empty())
             {
                 nse[i]=st.top();
             }
             st.push(i);
         }
         return nse;
         
    }
    
     vector<int> aman_pse(vector<int> &arr,int n)
    {
         vector<int>pse(n,-1);
          stack<int>st;
          st.push(0);
          for(int i=1;i<n;i++)
          {
              while(!st.empty()&&arr[st.top()]>=arr[i])
              {
                  st.pop();
              }
              if(!st.empty())
              {
                  pse[i]=st.top();
              }
              st.push(i);
          }
          return pse;
    }
    
    
    
    
    
    
    
    
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        vector<int>nse=aman_nse(arr,n);
        vector<int>pse=aman_pse(arr,n);
        int res=INT_MIN;
       for(int i=0;i<n;i++)
       {
          res=max(res,arr[i]*(nse[i]-pse[i]-1)); 
       }
       return res;
    }
};