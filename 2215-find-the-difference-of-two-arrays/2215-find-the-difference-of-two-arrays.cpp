class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>st1(nums1.begin(),nums1.end());
        set<int>st2(nums2.begin(),nums2.end());
        vector<vector<int>>ans;
         vector<int>v1;
         vector<int>v2;
        for(auto x:st1)
        {
           
           if(st2.find(x)==st2.end())
           {
               v1.push_back(x);
           }
        }
        ans.push_back(v1);
        for(auto x:st2)
        {

           if(st1.find(x)==st1.end())
           {
               v2.push_back(x);
           }
        }
        ans.push_back(v2);
        return ans;
    }
};