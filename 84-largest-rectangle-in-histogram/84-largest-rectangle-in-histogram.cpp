class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        stack<int>st;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            while(st.empty()==false&&arr[st.top()]>=arr[i])
            {
                int x= st.top();
                st.pop();
                int curr= arr[x]*(st.empty()?i:(i-st.top()-1));
                ans=max(ans,curr);
            }
            st.push(i);
        }
        while(st.empty()==false)
        {
            int x= st.top();
            st.pop();
            int curr= arr[x]*(st.empty()?n:(n-st.top()-1));
            ans=max(ans,curr);
        }
        return ans;
    }
};