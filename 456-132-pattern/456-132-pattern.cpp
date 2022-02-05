class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int n=nums.size();
        int arr[n];
        stack<int>st;
        arr[0]=nums[0];
        for(int i=1;i<n;i++)
        {
           arr[i]=min(arr[i-1],nums[i]);
        }
        
        for(int i=n-1;i>=0;i--)
        {
            while(st.empty()==false&&arr[i]>=st.top())
            {
                st.pop();
            }
            if(st.empty()==false&&nums[i]>st.top())
            {
                return true;
            }
            st.push(nums[i]);
        }
        return false;
     
    }
};