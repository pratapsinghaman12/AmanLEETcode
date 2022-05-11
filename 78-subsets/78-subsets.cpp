class Solution {
public:
    vector<vector<int>>ans;
    void generate(vector<int>&res,int i,vector<int>&nums)
    {
        if(i==nums.size())
        {
            ans.push_back(res);
            return;
        }
        generate(res,i+1,nums);
        res.push_back(nums[i]);
        generate(res,i+1,nums);
        res.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>res;
        generate(res,0,nums);
        return ans;
    }
};