class Solution {
public:
    int maxProduct(vector<int>& nums) {
         int ans=nums[0];
	    int  max_val=ans;
	    int  min_val=ans;
	   for(int i=1;i<nums.size();i++)
	   {
	       if(nums[i]<0)
	       {
	           swap(max_val,min_val);
	       }
	       max_val=max(nums[i],max_val*nums[i]);
	       min_val=min(nums[i],min_val*nums[i]);
	       ans=max(ans,max_val);
	   }
	   return ans;
    }
};