class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        
        int low1=0;
        int high1=n-1;
        int res1=-1;
        int res2=-1;
        while(low1<=high1)
        {
            int mid= (low1+high1)/2;
            if(nums[mid]>target)
            {
                high1=mid-1;
            }
            else if(nums[mid]<target)
            {
                low1=mid+1;
            }
            else
            {
                res1=mid;
                high1=mid-1;
            }
        }
        ans.push_back(res1);
        int low2=0;
        int high2=n-1;
        while(low2<=high2)
        {
            int mid= (low2+high2)/2;
            if(nums[mid]>target)
            {
                high2=mid-1;
            }
            else if(nums[mid]<target)
            {
                low2=mid+1;
            }
            else
            {
                res2=mid;
                low2=mid+1;
            }
        }
        ans.push_back(res2);
         return ans;
    }
   
};