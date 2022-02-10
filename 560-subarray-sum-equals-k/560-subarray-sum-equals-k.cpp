class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         unordered_map<int,int>mp;
        int res=0;
        int curr_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            curr_sum+=nums[i];
            if(curr_sum==k)
            {
                res++;
            }
            if(mp.find(curr_sum-k)!=mp.end())
            {
                res+=mp[curr_sum-k];
            }
            mp[curr_sum]++;
        }
        return res;
    }
};