class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        unordered_set<int>st(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(st.find(nums[i]-1)==st.end())
            {
                int count=1;
                while(st.find(nums[i]+count)!=st.end())
                {
                    count++;
                }
                ans=max(ans,count);
            }
        }
        return ans;
    }
};