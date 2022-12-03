class Solution {
public:
    vector<vector<int>>ans;
   void  subsetGenerate(vector<int>& nums,int i,vector<int>&temp){
       if(i==nums.size()){
           ans.push_back(temp);
           return;
       }
       
       subsetGenerate(nums,i+1,temp);
       
       temp.push_back(nums[i]);
       subsetGenerate(nums,i+1,temp);
       temp.pop_back();
   }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
          subsetGenerate(nums,0,temp);
       return ans;
    }
};